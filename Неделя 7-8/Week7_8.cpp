#include <iostream> //���������� ��� ������ � ��������
#include <cmath> //���������� ��� ��� ��������
#include <fstream> //���������� ��� ������ � ������ � ������
#include <string> //������ ������
std::ofstream f;
//������� 1.
//������� �� ����� � ����� �� �����, ������ ���������� ����� � ������ ������
//����� ������ ������.���������� ����� � ������ ������������(����� �� �����).
void Zad1()
{
	std::cout << "������� 1" << std::endl;
	int x;
	std::cin >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			std::cout << 0;
		}
		std::cout << std::endl;
	}

}
//������� 2C. ��������������� ������� (��� � �������� ����� ������������):
//-2*(x*x)+(3*x)-1
void Zad2()
{
	std::cout << "������� 2" << std::endl;
	std::cout << "������� ��������" << std::endl;
	std::cout << "������� ����� ";
	int x;
	std::cin >> x;
	std::cout << "������� ����� ";
	int y;
	std::cin >> y;
	std::cout << "������� ��� ";
	int z;
	std::cin >> z;
	for (int i = x; i < y; i+= z)
	{
		std::cout << "x:" << i;
		std::cout << " y:" << -2 * (i * i) + (3 * i) - 1 << std::endl;
	}
}
//������� 2N
// sqrt(2+3*x)+72*x+tg(4*x+31)
void Zad3()
{
	std::cout << "������� 2" << std::endl;
	std::cout << "������� ��������" << std::endl;
	std::cout << "������� ����� ";
	int x;
	std::cin >> x;
	std::cout << "������� ����� ";
	int y;
	std::cin >> y;
	std::cout << "������� ��� ";
	int z;
	std::cin >> z;
	for (int i = x; i < y; i += z)
	{
		std::cout << "x:" << i;
		std::cout << " y:" << sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31) << std::endl;
	}
}
//������� 4. ������� �� ����� ��� ����������� ����� �� � �� � � ����� �. ��������, ����
//� = 10, � = 35, � = 5, �� ����� ������ ���� ����� : 10 15 20 25 30 35. �������� �, �,
//� ����������� �������������(����������� � ���������� ��� �� �����).
void Zad4()
{
	std::cout << "������� 4" << std::endl;
	std::cout << "������� ��������" << std::endl;
	std::cout << "������� ����� ";
	int x;
	std::cin >> x;
	std::cout << "������� ����� ";
	int y;
	std::cin >> y;
	std::cout << "������� ��� ";
	int z;
	std::cin >> z;
	for (int i = x; i < y; i += z)
	{
		std::cout << i;
	}
}
//������� 5(7). ��������� ��������, ������������ ���������� ���������� ����������� �����,
//����� ���� �������� ����� �.
void Zad5()
{
	int a; //����� ����
	int count = 0; //���������� ���������
	std::cout << "������� ����� ���� ";
	std::cin >> a;
	for (int x = 1; x < 10; x++)
	{
		for (int y = 1; y < 10; y++)
		{
			for (int z = 1; z < 10; z++)
			{
				if ((x + y + z) == a)
				{
					count++;
				}
			}
		}
	}
	std::cout << "���������� ����: " << count << std::endl;
}
//������� 6(3�). ������������ ����� ����� � � �. ��������� y:
void Zad6()
{

	std::cout << "������� 5" << std::endl;
	std::cout << "����� � ";
	float h;
	std::cin >> h;
	std::cout << "����� � ";
	float x;
	std::cin >> x;
	float y = 0;
	for (int i = 1; i < h; i+=2)
	{
		y = 1 / (2 * h * x);
		std::cout << y << std::endl;
	}
	std::cout << "�����: "  << y << std::endl;
}
//������� 7(3g)
void Zad7()
{

	std::cout << "������� 6" << std::endl;
	std::cout << "����� � ";
	float h;
	std::cin >> h;
	std::cout << "����� � ";
	float x;
	std::cin >> x;
	float y = 0;
	for (int i = 1; i < h; i++)
	{
		y = 1 / (h * x);
		std::cout << y << std::endl;
	}
	std::cout << "�����: " << y << std::endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Zad1();
	Zad2();
	Zad3();
	Zad5();
	Zad6();
	Zad7();
	std::cout << "FIN" << std::endl;
	std::getchar();  // �������� �����, ����� �����
	std::getchar();
	return 0;
}