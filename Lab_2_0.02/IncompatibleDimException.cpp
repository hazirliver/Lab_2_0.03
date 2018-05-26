#include "IncompatibleDimException.h"

VectorIncompatibleDimException::VectorIncompatibleDimException(unsigned int id)
{
	this->id = id;
}

void VectorIncompatibleDimException::what()
{
	switch (this->id)
	{

	case(1):
	{
		std::cout << "Операция присвоения векторов не возможна, так как размерность векторов различна!" << std::endl;
		break;
	}
	case(2):
	{
		std::cout << "Операция сложения векторов с присваиванием не возможна, так как размерность векторов различна!" << std::endl;
		break;
	}
	case(3):
	{
		std::cout << "Операция вычитания векторов с присваиванием не возможна, так как размерность векторов различна!" << std::endl;
		break;
	}
	case(4):
	{
		std::cout << "Операция вычитания векторов не возможна, так как размерность векторов различна!" << std::endl;
		break;
	}
	case(5):
	{
		std::cout << "Операция сложения векторов не возможна, так как размерность векторов различна!" << std::endl;
		break;
	}
	case(6):
	{
		std::cout << "Операция умножения векторов не возможна, так как размерность векторов различна!" << std::endl;
		break;
	}
	}

}

MatrixIncompatibleDimException::MatrixIncompatibleDimException(unsigned int id)
{
	this->id = id;
}

void MatrixIncompatibleDimException::what()
{
	switch (this->id)
	{
	case(1):
	{
		std::cout << "Операция присваивания матриц не возможна, так как размерности матриц не совпадают" << std::endl;
		break;
	}
	case(2):
	{
		std::cout << "Операция сложения матриц с присваиванием не возможна, так как размерности матриц не совпадают" << std::endl;
		break;
	}
	case(3):
	{
		std::cout << "Операция вычитания матриц с присваиванием не возможна, так как размерности матриц не совпадают" << std::endl;
		break;
	}
	case(4):
	{
		std::cout << "Операция сложения матриц не возможна, так как размерности матриц не совпадают" << std::endl;
		break;
	}
	case(5):
	{
		std::cout << "Операция вычитания матриц не возможна, так как размерности матриц не совпадают" << std::endl;
		break;
	}
	//
	case(6):
	{
		std::cout << "Операция умножения матриц не возможна, так как количество столбцов первой матрицы не равно количеству строк второй матрицы" << std::endl;
		break;
	}
	case(7):
	{
		std::cout << "Операция умножения матрицы на вектор не возможна, так как количество столбцов матрицы не равно 1" << std::endl;
		break;
	}
	case(8):
	{
		std::cout << "Операция умножения вектора на матрицу не возможна, так как количество столбцов матрицы не равняется размерности вектора" << std::endl;
		break;
	}



	}
}
