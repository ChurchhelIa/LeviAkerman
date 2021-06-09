#include<iostream>

using namespace std;

int arr[10];

string NameAuthor[4] = { "Джеймс Кемерон", "Pasito", "Зигмунд Фрейд", "Иосиф Сталин" };
string NameFilm[10] = { "Киборг Убица", "Spizdili", "Начало", "Мочало", "Конец", "Брат 1", "Брат 2 Возвращение блудного", "Салат с курицей. 1000-7 способ приготовления","Морковка. Польза в названии","Может ли у голубей быть запор? Документальный Фильм" };
struct Kartoteca
{
	string name;
	int cost;
	string author;
};
Kartoteca arrK[10];

void Zad1() //Сгенерировать массив со случайными числами в диапазоне: [-20;20]
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = -20 + rand() % 40;
		std::cout << arr[i] << "; ";
	}
	std::cout << std::endl;
}
void Zad2(int arr[10]) //Вычислить сумму элементов массива: больших 5, меньших 7, больших 3.
{
	int c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 5)
		{
			c += arr[i];
		}
	}
	std::cout << "Сумма больше 5: " << c << "; " << std::endl;
	
	c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 7)
		{
			c += arr[i];
		}
	}
	std::cout << "Сумма меньше 7: " << c << "; " << std::endl;
	c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 3)
		{
			c += arr[i];
		}
	}
	std::cout << "Сумма больше 3: " << c << "; " << std::endl;
	std::cout << std::endl;
}
void Zad3(int arr[10]) // Посчитать количество элементов массива, больших нуля
{
	int c = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			c += 1;
		}
	}
	std::cout << "Количество элементов массива больше 0: " << c << "; " << std::endl;
	std::cout << std::endl;
}
void Zad4(int arr[10]) //Посчитать количество положительных/отрицательных элементов массива
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
	std::cout << "Количество элементов массива больше 0: " << c << "; " << std::endl;
	std::cout << "Количество элементов меньше больше 0: " << d << "; " << std::endl;
	std::cout << std::endl;
}

void Zad5(int arr[10]) // Заменить все отрицательные элементы массива нулями
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

void Zad6() //Создать новый массив из двух других массивов путём операций над элементами массивов: сложения
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
void Zad7(Kartoteca arrK[10]) //. Картотека видеотеки организована в виде массива структур с полями: название фильма, стоимость, режиссер.Ввести информацию по видеотеке
{
	for (int i = 0; i < 10; i++)
	{
		arrK[i].name = NameFilm[rand() % 10];
		arrK[i].cost = rand() % 1000;
		arrK[i].author = NameAuthor[rand() % 4];
	}
	//a. вывести информацию о фильмах, начиная с фильма с минимальной стоимостью.
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
		std::cout << "Имя Фильма " << arrK[i].name << ". ";
		std::cout << "Цена " << arrK[i].cost << ". ";
		std::cout << "Режисер " << arrK[i].author << "; " << std::endl;
	}
	std::cout << std::endl;
}

void Zad7_2(Kartoteca arrK[10])
{
	string name = "Зигмунд Фрейд";
	for (int i = 0; i < 10; i++)
	{
		if (arrK[i].author == name)
		{
			std::cout << "Имя Фильма " << arrK[i].name << ". ";
			std::cout << "Цена " << arrK[i].cost << ". ";
			std::cout << "Режисер " << arrK[i].author << "; " << std::endl;
		}
	}
	std::cout << std::endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Задание 1. Сгенерировать массив со случайными числами в диапазоне: [-20;20] "<< std::endl << std::endl;
	Zad1();
	std::cout << "Задание 2. Вычислить сумму элементов массива: больших 5, меньших 7, больших 3." << std::endl << std::endl;
	Zad2(arr);
	std::cout << "Задание 3. Посчитать количество элементов массива, больших нуля." << std::endl << std::endl;
	Zad3(arr);
	std::cout << "Задание 4. Посчитать количество положительных/отрицательных элементов массива. " << std::endl << std::endl;
	Zad4(arr);
	std::cout << "Задание 5. Заменить все отрицательные элементы массива нулями. " << std::endl << std::endl;
	Zad5(arr);
	std::cout << "Задание 6. Создать новый массив из двух других массивов путём операций над элементами массивов: сложения. " << std::endl;
	Zad6();
	std::cout << "Задание 7.Картотека видеотеки организована в виде массива структур с полями: название фильма, стоимость, режиссер.Ввести информацию по видеотеке " << std::endl << std::endl;
	Zad7(arrK);
	std::cout << "a. вывести информацию о фильмах, начиная с фильма с минимальной стоимостью. " << std::endl;
	std::cout << "g. вывести информацию о фильмах по возрастанию стоимости. " << std::endl << std::endl;
	Zad7_1(arrK);
	std::cout << "e. вывести информацию о фильмах одного режиссера. " << std::endl << std::endl;
	//Zad7_2(arrK);

	std::getchar();
	std::getchar();
	return 0;
}