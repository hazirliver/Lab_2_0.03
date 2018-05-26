#pragma once
#include <exception>

class OutOfRangeException : public std::exception
{
protected:
	unsigned short id = 0;
};

class VectorOutOfRangeException : public OutOfRangeException
{
public:
	VectorOutOfRangeException(unsigned short id);// Конструктор для вектора
	void what(); // Описывает суть ошибки
};

class MatrixOutOfRangeException : public OutOfRangeException
{
public:
	MatrixOutOfRangeException(unsigned short id); // Конструктор для матрицы
	void what(); // Описывает суть ошибки
};

