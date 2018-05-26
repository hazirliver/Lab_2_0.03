#include "OutOfRangeException.h"
#include <iostream>

VectorOutOfRangeException::VectorOutOfRangeException(unsigned short id)
{
	this->id = id;
}

void VectorOutOfRangeException::what()
{
	switch (this->id)
	{
	case(1):
	{
		std::cout << "Введенный индекс отрицательный" << std::endl;
	}
	case(2):
	{
		std::cout << "Введенный индекс больше размерности вектора" << std::endl;
	}
	}
		
}

MatrixOutOfRangeException::MatrixOutOfRangeException(unsigned short id)
{
	this->id = id;
}

void MatrixOutOfRangeException::what()
{
	switch (this->id)
	{
	case(1):
	{
		std::cout << "Количество строк должно быть положительным! " << std::endl;
		break;
	}
	case(2):
	{
		std::cout << "Количество столбцов должно быть положительным! " << std::endl;
		break;
	}
	case(3):
	{
		std::cout << "Введенный индекс строки отрицательный! " << std::endl;
		break;
	}
	case(4):
	{
		std::cout << "Введенный индекс столбца отрицательный! " << std::endl;
		break;
	}

	case(5):
	{
		std::cout << "Введенный индекс строки больше количества строк в матрице! " << std::endl;
		break;
	}
	case(6):
	{
		std::cout << "Введенный индекс столбца больше количества столбцов в матрице! " << std::endl;
		break;
	}

	}
}
