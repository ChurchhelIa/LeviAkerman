#include <iostream> //���������� ��� ������ � ��������
#include <cmath> //���������� ��� ��� ��������
#include <fstream> //���������� ��� ������ � ������ � ������
#include <string> //������ ������
//�������� ���������� ��� ����������
std::ofstream f;

//������� 1 ���� ������� y=f(x). ����� �������� ������� �� x:
//������� 3�
// y = 2 * abs(x+4)-6 ���� x<0
void Zad1()
{
	std::cout << "������� 1. ������� �, ��� � > 0" << std::endl;
	int x;
	std::cin >> x;
	if (x > 0)
	{
		std::cout << 2*abs(x + 4)-6 << std::endl;
	}
	else
	{
		std::cout << "x < 0" << std::endl;
	}
}
// y = 2*abs(x + 4)-6 ���� x<5
void Zad2()
{
	std::cout << "������� 2. ������� �, ��� � < 5" << std::endl;
	int x;
	std::cin >> x;
	if (x < 5)
	{
		std::cout << 2 * abs(x + 6)-(x*x) << std::endl;
	}
	else
	{
		std::cout << "x > 5" << std::endl;
	}
}
//������� 2. �������� ���������, ������� ��������� �� ������������ ���������� ����� �
//����������, ������ �� ����� � �������������� �������.
//������ B
void Zad3()
{
	std::cout << "������� 2." << std::endl;
	int x;
	int y;
	std::cout << "������� �" << std::endl;
	std::cin >> x;
	std::cout << "������� y" << std::endl;
	std::cin >> y;
	if (x < y || y > 0)
	{
		if (x < sqrt(2) && x > -sqrt(2))
		{
			std::cout << "����� ���������� � ����������� �������" << std::endl;
		}
		else
		{
			std::cout << "����� ���������� ��� ����������� �������" << std::endl;
		}
	} else
	{
		std::cout << "����� ���������� ��� ����������� �������" << std::endl;
	}
}
//������� 3.
//������ �
void Zad4()
{
	std::cout << "������� 3." << std::endl;
	int x;
	int y;
	std::cout << "������� �" << std::endl;
	std::cin >> x;
	std::cout << "������� y" << std::endl;
	std::cin >> y;

	if (x < sqrt(1 - (y - 1) * (y - 1)) && x > -sqrt(1 - (y - 1) * (y - 1)))
	{
		if (x < 1 && x > -1)
		{
			std::cout << "����� ���������� � ����������� �������" << std::endl;
		}
		else
		{
			std::cout << "����� ���������� ��� ����������� �������" << std::endl;
		}
	}
	else
	{
		std::cout << "����� ���������� ��� ����������� �������" << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Zad1();
	Zad2();
	Zad3();
	Zad4();
	std::cout << "FIN" << std::endl;
	std::getchar();  // �������� �����, ����� �����
	std::getchar();
	return 0;
}
