#include<iostream>

using namespace std;

int arr[10];

string NameAuthor[4] = { "������ �������", "Pasito", "������� �����", "����� ������" };
string NameFilm[10] = { "������ �����", "Spizdili", "������", "������", "�����", "���� 1", "���� 2 ����������� ��������", "����� � �������. 1000-7 ������ �������������","��������. ������ � ��������","����� �� � ������� ���� �����? �������������� �����" };
struct Kartoteca
{
	string name;
	int cost;
	string author;
};
Kartoteca arrK[10];

void Zad1() //������������� ������ �� ���������� ������� � ���������: [-20;20]
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = -20 + rand() % 40;
		std::cout << arr[i] << "; ";
	}
	std::cout << std::endl;
}
void Zad2(int arr[10]) //��������� ����� ��������� �������: ������� 5, ������� 7, ������� 3.
{
	int c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 5)
		{
			c += arr[i];
		}
	}
	std::cout << "����� ������ 5: " << c << "; " << std::endl;
	
	c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 7)
		{
			c += arr[i];
		}
	}
	std::cout << "����� ������ 7: " << c << "; " << std::endl;
	c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 3)
		{
			c += arr[i];
		}
	}
	std::cout << "����� ������ 3: " << c << "; " << std::endl;
	std::cout << std::endl;
}
void Zad3(int arr[10]) // ��������� ���������� ��������� �������, ������� ����
{
	int c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			c += 1;
		}
	}
	std::cout << "���������� ��������� ������� ������ 0: " << c << "; " << std::endl;
	std::cout << std::endl;
}
void Zad4(int arr[10]) //��������� ���������� �������������/������������� ��������� �������
{
	int c = 0;
	int d = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			c += 1;
		}
		if (arr[i] < 0)
		{
			d += 1;
		}
	}
	std::cout << "���������� ��������� ������� ������ 0: " << c << "; " << std::endl;
	std::cout << "���������� ��������� ������ ������ 0: " << d << "; " << std::endl;
	std::cout << std::endl;
}

void Zad5(int arr[10]) // �������� ��� ������������� �������� ������� ������
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
		}
		std::cout << arr[i] << "; ";
	}
	std::cout << std::endl;
}

void Zad6() //������� ����� ������ �� ���� ������ �������� ���� �������� ��� ���������� ��������: ��������
{
	int x = 0;
	int y = 0;
	for (int i = 0; i < 10; i++)
	{
		x = -20 + rand() % 40;
		y = -20 + rand() % 40;
		arr[i] = x + y;
		std::cout << arr[i] << "; ";
	}
	std::cout << std::endl;
}
void Zad7(Kartoteca arrK[10]) //. ��������� ��������� ������������ � ���� ������� �������� � ������: �������� ������, ���������, ��������.������ ���������� �� ���������
{
	for (int i = 0; i < 10; i++)
	{
		arrK[i].name = NameFilm[rand() % 10];
		arrK[i].cost = rand() % 1000;
		arrK[i].author = NameAuthor[rand() % 4];
	}
	//a. ������� ���������� � �������, ������� � ������ � ����������� ����������.
}
void Zad7_1(Kartoteca arrK[10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int x = 0;
			if (arrK[j].cost > arrK[j+1].cost)
			{
				x = arrK[j].cost;
				arrK[j].cost = arrK[j + 1].cost;
				arrK[j + 1].cost = x;
				j = -1;
			}
		}
		std::cout << "��� ������ " << arrK[i].name << ". ";
		std::cout << "���� " << arrK[i].cost << ". ";
		std::cout << "������� " << arrK[i].author << "; " << std::endl;
	}
	std::cout << std::endl;
}

void Zad7_2(Kartoteca arrK[10])
{
	string name = "������� �����";
	for (int i = 0; i < 10; i++)
	{
		if (arrK[i].author == name)
		{
			std::cout << "��� ������ " << arrK[i].name << ". ";
			std::cout << "���� " << arrK[i].cost << ". ";
			std::cout << "������� " << arrK[i].author << "; " << std::endl;
		}
	}
	std::cout << std::endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "������� 1. ������������� ������ �� ���������� ������� � ���������: [-20;20] "<< std::endl << std::endl;
	Zad1();
	std::cout << "������� 2. ��������� ����� ��������� �������: ������� 5, ������� 7, ������� 3." << std::endl << std::endl;
	Zad2(arr);
	std::cout << "������� 3. ��������� ���������� ��������� �������, ������� ����." << std::endl << std::endl;
	Zad3(arr);
	std::cout << "������� 4. ��������� ���������� �������������/������������� ��������� �������. " << std::endl << std::endl;
	Zad4(arr);
	std::cout << "������� 5. �������� ��� ������������� �������� ������� ������. " << std::endl << std::endl;
	Zad5(arr);
	std::cout << "������� 6. ������� ����� ������ �� ���� ������ �������� ���� �������� ��� ���������� ��������: ��������. " << std::endl;
	Zad6();
	std::cout << "������� 7.��������� ��������� ������������ � ���� ������� �������� � ������: �������� ������, ���������, ��������.������ ���������� �� ��������� " << std::endl << std::endl;
	Zad7(arrK);
	std::cout << "a. ������� ���������� � �������, ������� � ������ � ����������� ����������. " << std::endl;
	std::cout << "g. ������� ���������� � ������� �� ����������� ���������. " << std::endl << std::endl;
	Zad7_1(arrK);
	std::cout << "e. ������� ���������� � ������� ������ ���������. " << std::endl << std::endl;
	//Zad7_2(arrK);

	std::getchar();
	std::getchar();
	return 0;
}