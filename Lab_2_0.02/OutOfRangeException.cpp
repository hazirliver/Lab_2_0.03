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
		std::cout << "��������� ������ �������������" << std::endl;
	}
	case(2):
	{
		std::cout << "��������� ������ ������ ����������� �������" << std::endl;
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
		std::cout << "���������� ����� ������ ���� �������������! " << std::endl;
		break;
	}
	case(2):
	{
		std::cout << "���������� �������� ������ ���� �������������! " << std::endl;
		break;
	}
	case(3):
	{
		std::cout << "��������� ������ ������ �������������! " << std::endl;
		break;
	}
	case(4):
	{
		std::cout << "��������� ������ ������� �������������! " << std::endl;
		break;
	}

	case(5):
	{
		std::cout << "��������� ������ ������ ������ ���������� ����� � �������! " << std::endl;
		break;
	}
	case(6):
	{
		std::cout << "��������� ������ ������� ������ ���������� �������� � �������! " << std::endl;
		break;
	}

	}
}
