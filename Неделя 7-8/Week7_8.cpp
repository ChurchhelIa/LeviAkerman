#include <iostream> //Библиотека для работы с консолью
#include <cmath> //Библиотека для мат операций
#include <fstream> //Библиотека для чтения и запись с файлов
#include <string> //Чтение данных
std::ofstream f;
//Задание 1.
//Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки.Количество строк Н вводит пользователь(можно из файла).
void Zad1()
{
	std::cout << "Задание 1" << std::endl;
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
//Задание 2C. Протабулировать функцию (шаг и диапазон задаёт пользователь):
//-2*(x*x)+(3*x)-1
void Zad2()
{
	std::cout << "Задание 2" << std::endl;
	std::cout << "Введите диапазон" << std::endl;
	std::cout << "меньшее число ";
	int x;
	std::cin >> x;
	std::cout << "большее число ";
	int y;
	std::cin >> y;
	std::cout << "Введите шаг ";
	int z;
	std::cin >> z;
	for (int i = x; i < y; i+= z)
	{
		std::cout << "x:" << i;
		std::cout << " y:" << -2 * (i * i) + (3 * i) - 1 << std::endl;
	}
}
//Задание 2N
// sqrt(2+3*x)+72*x+tg(4*x+31)
void Zad3()
{
	std::cout << "Задание 2" << std::endl;
	std::cout << "Введите диапазон" << std::endl;
	std::cout << "меньшее число ";
	int x;
	std::cin >> x;
	std::cout << "большее число ";
	int y;
	std::cin >> y;
	std::cout << "Введите шаг ";
	int z;
	std::cin >> z;
	for (int i = x; i < y; i += z)
	{
		std::cout << "x:" << i;
		std::cout << " y:" << sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31) << std::endl;
	}
}
//Задание 4. Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
//Н = 10, М = 35, Ш = 5, то вывод должен быть таким : 10 15 20 25 30 35. Значения Н, М,
//Ш указываются пользователем(считываются с клавиатуры или из файла).
void Zad4()
{
	std::cout << "Задание 4" << std::endl;
	std::cout << "Введите диапазон" << std::endl;
	std::cout << "меньшее число ";
	int x;
	std::cin >> x;
	std::cout << "большее число ";
	int y;
	std::cin >> y;
	std::cout << "Введите шаг ";
	int z;
	std::cin >> z;
	for (int i = x; i < y; i += z)
	{
		std::cout << i;
	}
}
//Задание 5(7). Составить алгоритм, определяющий количество трёхзначных натуральных чисел,
//сумма цифр которого равна А.
void Zad5()
{
	int a; //сумма цифр
	int count = 0; //количество вариантов
	std::cout << "введите сумму цифр ";
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
	std::cout << "Количество цифр: " << count << std::endl;
}
//Задание 6(3с). Пользователь задаёт число Ч и Х. Посчитать y:
void Zad6()
{

	std::cout << "Задание 5" << std::endl;
	std::cout << "число Ч ";
	float h;
	std::cin >> h;
	std::cout << "число Х ";
	float x;
	std::cin >> x;
	float y = 0;
	for (int i = 1; i < h; i+=2)
	{
		y = 1 / (2 * h * x);
		std::cout << y << std::endl;
	}
	std::cout << "Ответ: "  << y << std::endl;
}
//Задание 7(3g)
void Zad7()
{

	std::cout << "Задание 6" << std::endl;
	std::cout << "число Ч ";
	float h;
	std::cin >> h;
	std::cout << "число Х ";
	float x;
	std::cin >> x;
	float y = 0;
	for (int i = 1; i < h; i++)
	{
		y = 1 / (h * x);
		std::cout << y << std::endl;
	}
	std::cout << "Ответ: " << y << std::endl;
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
	std::getchar();  // ожидание ввода, чтобы прога
	std::getchar();
	return 0;
}