#include "Matr.h"
#include "OutOfRangeException.h"
#include "IncompatibleDimException.h"
#include <ctime>


int main()
{
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "rus");
	int rows = 0;
	int columns = 0;
	/*double **array = new double*[2];
	for (int i = 0; i < 2; i++)
	{
		array[i] = new double[5];
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			*(*(array + i) + j) = (double)rand() / (RAND_MAX + 1) * (100 - 0);
			std::cout << std::setw(7) << std::setprecision(3) << array[i][j];
		}
		std::cout << std::endl;
	}
*/
	std::cout << "������� ���������� ����� ������� 1: ";
	std::cin >> rows;
	std::cout << "������� ���������� �������� ������� 1: ";
	std::cin >> columns;
	try
	{
		///
		matrix matr1(rows, columns);
		std::cout << "������� ���������� ������ �������:" << std::endl;
		std::cin >> matr1;
		std::cout << "������ �������: " << std::endl;
		std::cout << matr1;
		///
		/*std::cout << "������� ���������� ����� ������ ������� : ";
		std::cin >> rows;
		std::cout << "������� ���������� �������� ������ �������: ";
		std::cin >> columns;*/
		/*matrix matr2(rows, columns);
		std::cout << "������� ���������� ������ �������:" << std::endl;
		std::cin >> matr2;
		std::cout << "������ �������: " << std::endl;
		std::cout << matr2;
		///
		std::cout << "============================================================" << std::endl;


		int dim = 0;
		std::cout << "������� ����������� ������a: ";
		std::cin >> dim;
		vector vect(dim);
		std::cout << "������� ���������� �������:" << std::endl;
		std::cin >> vect;
		std::cout << vect;


		try
		{
			std::cout << "matr1 + matr2 = " << std::endl;
			std::cout << matr1 + matr2;
		}
		catch (MatrixIncompatibleDimException &ex)
		{
			ex.what();
		}
		std::cout << "============================================================" << std::endl;
		try
		{
			std::cout << "matr1 * matr2 = " << std::endl;
			std::cout << matr1 * matr2;
		}
		catch (MatrixIncompatibleDimException &ex)
		{
			ex.what();
		}
		std::cout << "============================================================" << std::endl;
		try
		{
			std::cout << "matr1 * vect = " << std::endl;
			std::cout << matr1 * vect;
		}
		catch (MatrixIncompatibleDimException &ex)
		{
			ex.what();
		}
		///
		std::cout << "============================================================" << std::endl;
		try
		{
			std::cout << "vect1 * matr2= " << std::endl;
			std::cout << vect * matr2;
		}
		catch (MatrixIncompatibleDimException &ex)
		{
			ex.what();
		}
		///
		std::cout << "============================================================" << std::endl;
		std::cout << "-matr1 = " << std::endl;
		std::cout << -matr1;
		std::cout << "============================================================" << std::endl;
		try
		{
			std::cout << "matr1 += matr2 = " << std::endl;
			std::cout << (matr1 += matr2);
		}
		catch (MatrixIncompatibleDimException &ex)
		{
			ex.what();
		}
		std::cout << "============================================================" << std::endl;
		std::cout << "matr1 * 2 = " << std::endl;
		std::cout << matr1 * 2;
		std::cout << "============================================================" << std::endl;
		std::cout << "-3 * matr1 = " << std::endl;
		std::cout << -3 * matr1;
		std::cout << "============================================================" << std::endl;
		try
		{
			std::cout << "matr1(1, 100) = " << matr1(1, 100) << std::endl;
		}
		catch (MatrixOutOfRangeException &ex)
		{
			ex.what();
		}*/
		std::cout << "============================================================" << std::endl;
		std::cout << "transposed matr1: " << std::endl;
		std::cout << matr1.transpose();
		std::cout << "============================================================" << std::endl;
	}
	catch (MatrixOutOfRangeException &ex)
	{
		ex.what();
	}
	
	
	//
	//int dim = 0;
	//std::cout << "������� ����������� ������a: ";
	//std::cin >> dim;
	//if (dim <= 0)
	//{
	//	std::cout << "��� �� ������))" << std::endl;
	//}
	//else
	//{
	//	vector vect1(dim);
	//	std::cout << "������� ���������� ������� �������:" << std::endl;
	//	std::cin >> vect1;
	//	std::cout << vect1;
	//	
	//}
	//
	//int dim = 0;
	//std::cout << "������� ����������� ��������: ";
	//std::cin >> dim;
	//if (dim <= 0)
	//{
	//	std::cout << "��� �� ������))" << std::endl;
	//}
	//else
	//{
	//	vector vect1(dim);
	//	vector vect2(dim);
	//	vector vect3(dim);
	//	std::cout << "������� ���������� ������� �������:" << std::endl;
	//	std::cin >> vect1;
	//	std::cout << "������� ���������� ������ �������:" << std::endl;
	//	std::cin >> vect2;
	//	/*std::cout << "������� ���������� �������� �������:" << std::endl;
	//	std::cin >> vect3;*/
	//	std::cout << "��������� ������������ ������� �� ������ = " << vect1 * vect2 << std::endl;
	//	std::cout << "5-� ���������� ������� ������� = " << vect1[4] << std::endl;
	//	std::cout << "���������� ������� ������� = " << vect1;
	//	std::cout << "���������� ������� ������� = " << vect2;
	//	std::cout << "����� ������� ������� = " << vect1.length() << std::endl;
	//	std::cout << "����������� ������� ������� = " << vect2.dimention() << std::endl;
	//	std::cout << "-v1 + 3*v2*v1  " << (vect2*3*vect2) << std::endl;
	//	std::cout << std::endl << std::endl << "";


	//}

	/*int dim1 = 0;
	int dim2 = 0;
	std::cout << "������� ����������� ������� ������a: ";
	std::cin >> dim1;
	vector vect1(dim1);
	std::cout << "������� ���������� ������� �������:" << std::endl;
	std::cin >> vect1;
	std::cout << vect1;
	

	std::cout << "������� ����������� ������� ������a: ";
	std::cin >> dim2;
	vector vect2(dim2);
	std::cout << "������� ���������� ������� �������:" << std::endl;
	std::cin >> vect2;
	std::cout << vect2;
		

		
		try
		{
			vect1 = vect2;
			std::cout << "vect1 = vect2 = " << vect1 << std::endl;
			std::cout << "vect2 = " << vect2 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "vect1 + vect2 = " << vect1 + vect2 << std::endl;
			std::cout << "vect1 = " << vect1 << std::endl;
			std::cout << "vect2 = " << vect2 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "vect1 - vect2 = " << vect1 - vect2 << std::endl;
			std::cout << "vect1 = " << vect1 << std::endl;
			std::cout << "vect2 = " << vect2 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "vect1 += vect2 = " << (vect1 += vect2) << std::endl;
			std::cout << "vect1 = " << vect1 << std::endl;
			std::cout << "vect2 = " << vect2 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "vect1 -= vect2 = " << (vect1 -= vect2) << std::endl;
			std::cout << "vect1 = " << vect1 << std::endl;
			std::cout << "vect2 = " << vect2 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "vect1 * vect2 = " << (vect1 * vect2) << std::endl;
			std::cout << "vect1 = " << vect1 << std::endl;
			std::cout << "vect2 = " << vect2 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "����������� ������� ������� = " << vect1.dimension() << std::endl;
			std::cout << "vect1 = " << vect1 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "����� ������� ������� = " << vect2.length() << std::endl;
			std::cout << "vect2 = " << vect2 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorIncompatibleDimException &ex)
		{
			ex.what();
		}
		try
		{
			std::cout << "2-� ������� ������� ������� = " << vect1[2] << std::endl;
			std::cout << "vect1 = " << vect1 << std::endl;
			std::cout << "======================================" << std::endl;
		}
		catch (VectorOutOfRangeException &ex)
		{
			ex.what();
		}*/
	/*	try
		{
			std::cout << "-6-� ������� ������� ������� = " << vect1[-6] << std::endl;
			std::cout << "��� �� ������������, ��� ��� ������� ����������" << std::endl;
		}
		catch (VectorOutOfRangeException &ex)
		{
			ex.what();
		}
		std::cout << "vect1 = " << vect1 << std::endl;
		std::cout << "======================================" << std::endl;
		try
		{
			std::cout << "999-� ������� ������� ������� = " << vect1[999] << std::endl;
			std::cout << "��� �� ������������, ��� ��� ������� ����������" << std::endl;
		}
		catch (VectorOutOfRangeException &ex)
		{
			ex.what();
		}
		std::cout << "vect1 = " << vect1 << std::endl;
		std::cout << "======================================" << std::endl;
	*/
	



	system("pause");
	return(0);
}