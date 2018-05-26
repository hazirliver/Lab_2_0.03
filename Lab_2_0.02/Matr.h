#pragma once
#include "Vector.h"

class matrix
{
private:
	int rows = 0;
	int columns = 0;
	double **matr = new double*[rows];
public:
	//matrix(int rows, int columns);
	matrix(int rows, int columns, double value = 0);
	//matrix(int rows, int columns, double **array, int array_rows, int array_columns);
	matrix(const matrix &otherMatrix);
public:
	matrix& operator = (const matrix &matr2);
	matrix& operator += (const matrix &matr2);
	matrix& operator -= (const matrix &matr2);
	matrix& operator + ();
	matrix operator + (const matrix &matr2);
	friend matrix operator - (const matrix &matr);
	friend matrix operator - (const matrix &matr1, const matrix &matr2);
	friend matrix operator * (const matrix &matr, const double a);			// Умножение матрицы на число
	friend matrix operator * (const matrix &matr, const vector &vect);		// Умножение матрицы на вектор
	matrix operator * (const matrix &matr2);								// Умножение матрицы на матрицу
	friend matrix operator * (const double a, const matrix &matr);			// Умножение числа на матрицу
	friend matrix operator * (const vector &vect, const matrix &matr);		// Умножение вектора на матрицу
	double& operator () (int i, int j);
	friend std::ostream& operator << (std::ostream& out, const matrix &matr);
	friend std::istream& operator >> (std::istream& in, matrix &matr);

public:
	matrix transpose();
	int getRows() const;
	int getColumns() const;

public:
	~matrix(); //Деструктор
};

