#pragma once
#include <exception>
#include <iostream>

class IncompatibleDimException : public std::exception
{
protected:
	unsigned short id = 0;
};

class VectorIncompatibleDimException : public IncompatibleDimException
{
public:
	VectorIncompatibleDimException(unsigned int id);
	void what();
};

class MatrixIncompatibleDimException : public IncompatibleDimException
{
public:
	MatrixIncompatibleDimException(unsigned int id);
	void what();
};