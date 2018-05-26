#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include "OutOfRangeException.h"
#include "IncompatibleDimException.h"
class vector
{
private:
	int dim = 0;
	double *vect = nullptr;
public:
	//vector(int dim); // Конструктор, принимающий только размер
	vector(int dim, double value = 0); // Конструктор, принимающий размер и начальные значения вектора

	vector(const vector &otherVector); // Конструктор копирования


public:
	vector& operator = (const vector &v2);
	vector& operator += (const vector &v2);
	vector& operator -= (const vector &v2);
	vector& operator + ();
	friend vector operator - (const vector &v);
	friend vector operator - (const vector &v1, const vector &v2);
	vector operator + (const vector &v2);
	vector operator * (const double a);
	friend vector operator * (double a, const vector &v);
	double operator * (const vector &v2);
	double& operator[] (int i) const;
	friend std::ostream& operator << (std::ostream& out, const vector &v);
	friend std::istream& operator >> (std::istream& in, vector &v);

public:
	 double length() const;
	 int dimension() const;

public:
	 ~vector(); // Деструктор

};