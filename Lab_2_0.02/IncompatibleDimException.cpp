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
		std::cout << "�������� ���������� �������� �� ��������, ��� ��� ����������� �������� ��������!" << std::endl;
		break;
	}
	case(2):
	{
		std::cout << "�������� �������� �������� � ������������� �� ��������, ��� ��� ����������� �������� ��������!" << std::endl;
		break;
	}
	case(3):
	{
		std::cout << "�������� ��������� �������� � ������������� �� ��������, ��� ��� ����������� �������� ��������!" << std::endl;
		break;
	}
	case(4):
	{
		std::cout << "�������� ��������� �������� �� ��������, ��� ��� ����������� �������� ��������!" << std::endl;
		break;
	}
	case(5):
	{
		std::cout << "�������� �������� �������� �� ��������, ��� ��� ����������� �������� ��������!" << std::endl;
		break;
	}
	case(6):
	{
		std::cout << "�������� ��������� �������� �� ��������, ��� ��� ����������� �������� ��������!" << std::endl;
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
		std::cout << "�������� ������������ ������ �� ��������, ��� ��� ����������� ������ �� ���������" << std::endl;
		break;
	}
	case(2):
	{
		std::cout << "�������� �������� ������ � ������������� �� ��������, ��� ��� ����������� ������ �� ���������" << std::endl;
		break;
	}
	case(3):
	{
		std::cout << "�������� ��������� ������ � ������������� �� ��������, ��� ��� ����������� ������ �� ���������" << std::endl;
		break;
	}
	case(4):
	{
		std::cout << "�������� �������� ������ �� ��������, ��� ��� ����������� ������ �� ���������" << std::endl;
		break;
	}
	case(5):
	{
		std::cout << "�������� ��������� ������ �� ��������, ��� ��� ����������� ������ �� ���������" << std::endl;
		break;
	}
	//
	case(6):
	{
		std::cout << "�������� ��������� ������ �� ��������, ��� ��� ���������� �������� ������ ������� �� ����� ���������� ����� ������ �������" << std::endl;
		break;
	}
	case(7):
	{
		std::cout << "�������� ��������� ������� �� ������ �� ��������, ��� ��� ���������� �������� ������� �� ����� 1" << std::endl;
		break;
	}
	case(8):
	{
		std::cout << "�������� ��������� ������� �� ������� �� ��������, ��� ��� ���������� �������� ������� �� ��������� ����������� �������" << std::endl;
		break;
	}



	}
}
