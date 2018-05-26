#include <iostream>
#include "Vector.h"

//vector::vector(int dim) // Конструктор
//{
//	this->dim = dim;
//	vect = new double[dim];
//	for (int i = 0; i < dim; ++i)
//	{
//		vect[i] = 0;
//	}
//}

vector::vector(int dim, double value) // Конструктор, принимающий размер и начальные значения вектора
{
	this->dim = dim;
	vect = new double[dim];
	for (int i = 0; i < dim; ++i)
	{
		vect[i] = value;
	}
}

vector::vector(const vector &otherVector) // Конструктор копирования
{
	if (otherVector.dim == 0)
	{
		this->dim = 0;
		vect = nullptr;
	}
	else
	{
		this->dim = otherVector.dim;
		if (vect != nullptr) // Устраняет утечку памяти
		{
			delete[] vect;
		}
		vect = new double[otherVector.dim];
		int i = dim;
		while (i--)
		{
			*(vect + i) = *(otherVector.vect + i);
		}
		
	}
}

vector& vector::operator = (const vector &v2)
{
	if (v2.dim != this->dim)
	{
		throw (VectorIncompatibleDimException(1));
	}
	for (int i = 0; i < dim; ++i)
	{
		*(this->vect + i) = *(v2.vect + i);
	}
	return *this;
}

vector& vector::operator += (const vector &v2)
{
	if (v2.dim != this->dim)
	{
		throw (VectorIncompatibleDimException(2));
	}
	for (int i = 0; i < dim; ++i)
	{
		*(this->vect + i) = *(this->vect + i) + *(v2.vect + i);
	}
	return *this;
}

vector& vector::operator -= (const vector &v2)
{
	if (v2.dim != this->dim)
	{
		throw (VectorIncompatibleDimException(3));
	}
	for (int i = 0; i < dim; ++i)
	{
		*(this->vect + i) = *(this->vect + i) - *(v2.vect + i);
	}
	return *this;
}

vector& vector::operator + ()
{
	return *this;
}

vector operator - (const vector &v)
{
	vector buff(v.dim);
	for (int i = 0; i < v.dim; ++i)
	{
		*(buff.vect + i) = -(*(v.vect + i));
	}
	return buff;
}

vector operator - (const vector &v1, const vector &v2)
{
	if (v1.dim != v2.dim)
	{
		throw (VectorIncompatibleDimException(4));
	}
	vector buff(v1.dim);
	for (int i = 0; i < v1.dim; ++i)
	{
		*(buff.vect + i) = *(v1.vect + i) - *(v2.vect + i);
	}
	return buff;
}

vector vector::operator + (const vector &v2)
{
	if (v2.dim != this->dim)
	{
		throw (VectorIncompatibleDimException(5));
	}
	vector buff(dim);
	for (int i = 0; i < dim; ++i)
	{
		*(buff.vect + i) = *(this->vect + i) + *(v2.vect + i);
	}
	return buff;
}

vector vector::operator * (const double a)
{
	
	vector buff(dim);
	for (int i = 0; i < dim; ++i)
	{
		*(buff.vect + i) = *(this->vect + i) * a;
	}
	return buff;
}

vector operator * (double a, const vector &v)
{
	vector buff(v.dim);
	for (int i = 0; i < v.dim; ++i)
	{
		*(buff.vect + i) = *(v.vect + i) * a;
	}
	return buff;
}

double vector::operator * (const vector &v2)
{
	if (dim != v2.dim)
	{
		throw (VectorIncompatibleDimException(6));
	}
	double dot_Product = 0;
	for (int i = 0; i < dim; ++i)
	{
		dot_Product += (*(this->vect + i) * (*(v2.vect + i)));
	}
	return (dot_Product);
}


double& vector::operator[] (int i) const
{
	if ((i < 0) || (i > this->dim - 1))
	{
		if (i < 0)
		{
			throw VectorOutOfRangeException(1);
		}
		if (i > this->dim - 1)
		{
			throw VectorOutOfRangeException(2);
		}
	}
	else
	{
		return this->vect[i];
	}
	

}

std::ostream& operator << (std::ostream& out, const vector &v)
{
	out << "(";
	for (int i = 0; i < v.dim; ++i)
	{
		out << *(v.vect + i);
		if ((i + 1) < v.dim)
		{
			out << ", ";
		}
	}
	out << ")" << std::endl;
	return out;
}

std::istream& operator >> (std::istream& in, vector &v)
{
	for (int i = 0; i < v.dim; ++i)
	{
		in >> *(v.vect + i);
	}
	return in;
}

double vector::length() const
{
	double length = 0;
	for (int i = 0; i < dim; ++i)
	{
		length += ((*(this->vect + i)) * (*(this->vect + i)));
	}
	return sqrt(length);
}


int vector::dimension() const
{
	return dim;
}

vector::~vector()
{
	//std::cout << "деструктор" << std::endl;
	if( vect!= nullptr)
	{
		delete[] vect;
	}
	
}



