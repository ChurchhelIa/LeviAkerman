#include <iostream> //Библиотека для работы с консолью
#include <cmath> //Библиотека для мат операций
#include <fstream> //Библиотека для чтения и запись с файлов
#include <string> //Чтение данных
//Основные переменные для вычислений
std::ofstream f;

//Задание 1 Дана функция y=f(x). Найти значение функции по x:
//Задание 3С
// y = 2 * abs(x+4)-6 если x<0
void Zad1()
{
	std::cout << "Задание 1. Введите х, при х > 0" << std::endl;
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
// y = 2*abs(x + 4)-6 если x<5
void Zad2()
{
	std::cout << "Задание 2. Введите х, при х < 5" << std::endl;
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
//Задание 2. Напишите программу, которая принимает от пользователя координаты точки и
//определяет, попала ли точка в заштрихованную область.
//График B
void Zad3()
{
	std::cout << "Задание 2." << std::endl;
	int x;
	int y;
	std::cout << "Введите х" << std::endl;
	std::cin >> x;
	std::cout << "Введите y" << std::endl;
	std::cin >> y;
	if (x < y || y > 0)
	{
		if (x < sqrt(2) && x > -sqrt(2))
		{
			std::cout << "Точка находиться в закрашенной области" << std::endl;
		}
		else
		{
			std::cout << "Точка находиться вне закрашенной области" << std::endl;
		}
	} else
	{
		std::cout << "Точка находиться вне закрашенной области" << std::endl;
	}
}
//Задание 3.
//График В
void Zad4()
{
	std::cout << "Задание 3." << std::endl;
	int x;
	int y;
	std::cout << "Введите х" << std::endl;
	std::cin >> x;
	std::cout << "Введите y" << std::endl;
	std::cin >> y;

	if (x < sqrt(1 - (y - 1) * (y - 1)) && x > -sqrt(1 - (y - 1) * (y - 1)))
	{
		if (x < 1 && x > -1)
		{
			std::cout << "Точка находиться в закрашенной области" << std::endl;
		}
		else
		{
			std::cout << "Точка находиться вне закрашенной области" << std::endl;
		}
	}
	else
	{
		std::cout << "Точка находиться вне закрашенной области" << std::endl;
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
	std::getchar();  // ожидание ввода, чтобы прога
	std::getchar();
	return 0;
}
