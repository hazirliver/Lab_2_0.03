#include "Matr.h"
#include "OutOfRangeException.h"
// Конструктор 
//matrix::matrix(int rows, int columns)
//{
//	if (rows < 0)
//	{
//		throw (MatrixOutOfRangeException(1));
//	}
//	if (columns < 0)
//	{
//		throw (MatrixOutOfRangeException(2));
//	}
//	this->rows = rows;
//	this->columns = columns;
//	matr = new double*[rows];
//	for (int i = 0; i < rows; ++i)
//	{
//		matr[i] = new double[columns];
//	}
//	
//}

matrix::matrix(int rows, int columns, double value)
{
	if (rows < 0)
	{
		throw (MatrixOutOfRangeException(1));
	}
	if (columns < 0)
	{
		throw (MatrixOutOfRangeException(2));
	}
	this->rows = rows;
	this->columns = columns;
	matr = new double*[rows];
	for (int i = 0; i < rows; ++i)
	{
		matr[i] = new double[columns];
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			*(*(matr + i) + j) = value;
		}
	}

}

//matrix::matrix(int rows, int columns, double **array, int array_rows, int array_columns)
//{
//	if (rows < 0)
//	{
//		throw (MatrixOutOfRangeException(1));
//	}
//	if (columns < 0)
//	{
//		throw (MatrixOutOfRangeException(2));
//	}
//	if ( (rows < array_rows) || (columns != array_columns))
//	{
//		this->rows = rows;
//		this->columns = columns;
//		matr = new double*[rows];
//		for (int i = 0; i < rows; ++i)
//		{
//			matr[i] = new double[columns];
//		}
//		for (int i = 0; i < rows; ++i)
//		{
//			for (int j = 0; j < columns; ++j)
//			{
//				*(*(matr + i) + j) = array[i][j];
//			}
//		}
//	}
//	if (rows > array_rows)
//	{
//		this->rows = rows;
//		this->columns = columns;
//		matr = new double*[rows];
//		for (int i = 0; i < rows; ++i)
//		{
//			matr[i] = new double[columns];
//		}
//		for (int i = 0; i < rows; ++i)
//		{
//			for (int j = 0; j < columns; ++j)
//			{
//				*(*(matr + i) + j) = array[i][j];
//			}
//		}
//		for (int i = rows + 1; i < array_rows; ++i)
//		{
//			for (int j = columns + 1; j < array_columns; ++j)
//			{
//				*(*(matr + i) + j) = 0;
//			}
//		}
//		
//	}
//	this->rows = rows;
//	this->columns = columns;
//	matr = new double*[rows];
//	for (int i = 0; i < rows; ++i)
//	{
//		matr[i] = new double[columns];
//	}
//	for (int i = 0; i < rows; ++i)
//	{
//		for (int j = 0; j < columns; ++j)
//		{
//			*(*(matr + i) + j) = array[i][j];
//		}
//	}
//
//}

// Конструктор копирования
matrix::matrix(const matrix &otherMatrix)
{
	this->rows = otherMatrix.rows;
	this->columns = otherMatrix.columns;
	/*for (int i = 0; i < rows; ++i)
	{
		delete[] matr[i];
	}
	delete[] matr;*/
	matr = new double*[otherMatrix.rows];
	for (int i = 0; i < rows; ++i)
	{
		matr[i] = new double[columns];
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			*(*(matr + i) + j) = *(*(otherMatrix.matr + i) + j);
		}
	}
}

matrix& matrix::operator=(const matrix & matr2)
{
	if ((this->columns != matr2.columns) || (this->rows != matr2.rows))
	{
		throw MatrixIncompatibleDimException(1);
	}
	
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			this->matr[i][j] = matr2.matr[i][j];
		}
	}

	return *this;
}

matrix& matrix::operator+=(const matrix & matr2)
{
	if ((this->columns != matr2.columns) || (this->rows != matr2.rows))
	{
		throw MatrixIncompatibleDimException(2);
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			this->matr[i][j] += matr2.matr[i][j];
		}
	}

	return *this;
}

matrix& matrix::operator-=(const matrix & matr2)
{
	if ((this->columns != matr2.columns) || (this->rows != matr2.rows))
	{
		throw MatrixIncompatibleDimException(3);
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			this->matr[i][j] -= matr2.matr[i][j];
		}
	}

	return *this;
}

matrix& matrix::operator+()
{
	return *this;
}

matrix matrix::operator+(const matrix & matr2)
{
	if ((this->columns != matr2.columns) || (this->rows != matr2.rows))
	{
		throw MatrixIncompatibleDimException(4);
	}
	matrix buff(rows, columns);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			buff.matr[i][j] = this->matr[i][j] + matr2.matr[i][j];
		}
	}
	return buff;
}

matrix operator-(const matrix &matr)
{
	matrix buff(matr.rows, matr.columns);
	for (int i = 0; i < matr.rows; ++i)
	{
		for (int j = 0; j < matr.columns; ++j)
		{
			buff.matr[i][j] = -(matr.matr[i][j]);
		}
	}
	return buff;
}

matrix operator-(const matrix &matr1, const matrix &matr2)
{
	if ((matr1.columns != matr2.columns) || (matr1.rows != matr2.rows))
	{
		throw MatrixIncompatibleDimException(5);
	}
	matrix buff(matr1.rows, matr1.columns);
	for (int i = 0; i < matr1.rows; ++i)
	{
		for (int j = 0; j < matr1.columns; ++j)
		{
			buff.matr[i][j] = matr1.matr[i][j] - matr2.matr[i][j];
		}
	}
	return buff;
}

matrix operator *(const matrix &matr, const double a)
{
	matrix buff(matr.rows, matr.columns);
	for (int i = 0; i < matr.rows; ++i)
	{
		for (int j = 0; j < matr.columns; ++j)
		{
			buff.matr[i][j] = matr.matr[i][j] * a;
		}
	}
	return buff;
}

matrix operator * (const matrix &matr, const vector &vect2)
{
	if (matr.rows != 1)
	{
		throw MatrixIncompatibleDimException(7);
	}
	matrix buff(matr.rows, matr.columns);
	for (int i = 0; i < matr.rows; ++i)
	{
		for (int j = 0; j < matr.columns; ++j)
		{
			buff.matr[i][j] += matr.matr[i][j] * (vect2[i]);
		}
	}
	return buff;
}	

matrix matrix::operator*(const matrix &matr2)
{
	if (this->columns != matr2.rows)
	{
		throw MatrixIncompatibleDimException(6);
	}
	matrix buff(rows, matr2.columns);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < matr2.columns; ++j)
		{
			buff.matr[i][j] = 0;
			for (int inner = 0; inner < columns; ++inner)
			{
				buff.matr[i][j] += matr[i][inner] * matr2.matr[inner][j];
			}
		}
	}
	return buff;
}


matrix operator * (const double a, const matrix &matr)
{
	matrix buff(matr.rows, matr.columns);
	for (int i = 0; i < matr.rows; ++i)
	{
		for (int j = 0; j < matr.columns; ++j)
		{
			buff.matr[i][j] = matr.matr[i][j] * a;
		}
	}
	return buff;
}

matrix operator*(const vector & vect, const matrix & matr)
{
	if (vect.dimension() != matr.rows)
	{
		throw MatrixIncompatibleDimException(8);
	}
	matrix buff(vect.dimension(), matr.columns);
	for (int i = 0; i < vect.dimension(); ++i)
	{
		for (int j = 0; j < matr.columns; ++j)
		{
			buff.matr[i][j] = matr.matr[i][j] * vect[j];
		}
	}
	return buff;
}

double& matrix::operator () (int i, int j)
{
	if (i < 0)
	{
		throw MatrixOutOfRangeException(3);
	}
	if (i > this->rows)
	{
		throw MatrixOutOfRangeException(4);
	}
	if (j < 0)
	{
		throw MatrixOutOfRangeException(5);
	}
	if (j > this->columns)
	{
		throw MatrixOutOfRangeException(6);
	}
	return this->matr[i][j];
}

std::ostream& operator << (std::ostream& out, const matrix &matr)
{
	for (int i = 0; i < matr.rows; ++i)
	{
		out << "|";
		for (int j = 0; j < matr.columns; ++j)
		{
			out << std::setw(4) << matr.matr[i][j];
		}
		out << "   |" << std::endl;
	}

	return out;
}

std::istream& operator >> (std::istream& in, matrix &matr)
{
	for (int i = 0; i < matr.rows; ++i)
	{
		for (int j = 0; j < matr.columns; ++j)
		{
			in >> matr.matr[i][j];
		}
	}
	return in;
}

matrix matrix::transpose()
{
	matrix buff(this->columns, this->rows);
	for (int i = 0; i < this->rows; ++i) 
	{
		for (int j = 0; j < this->columns; ++j) 
		{
			buff.matr[j][i] = this->matr[i][j];
		}
	}
	return buff;
}

int matrix::getRows() const
{
	return rows;
}

int matrix::getColumns() const
{
	return rows;
}



matrix::~matrix()
{

	for (int i = 0; i < rows; ++i)
	{
		delete[] matr[i];
	}
	delete[] matr;

}