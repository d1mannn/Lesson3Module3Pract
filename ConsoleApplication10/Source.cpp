#include <stdio.h>
#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>

using namespace std;

enum Month
{
	Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Des
};

enum Days
{
	Sun, Mon, Tue, Wen, Thur, Fri, Sat
};


int main()
{


	setlocale(LC_ALL, "Rus");

	cout << "Введите номер задания - ";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{

#pragma region TASK1
		task1 :
	case 1:
		cout << "Введите число двухзначное число -";
		int a;
		cin >> a;
		if (a < 10 && a > 99)
		{
			cout << "Введено недопустимое число - ";
			goto task1;
		}
		else
		{
			cout << "Нужно определить входят ли в Ваше число числа 3 и 7\n";
			if ((a % 10) == 3 || (a % 10) == 7 || (a / 10) == 3 || (a / 10) == 7)
			{
				cout << "В число " << a << " входит числа 3 или 7\n";
			}
			else
			{
				cout << "Данное число не содержит цифры 3 или 7\n";
			}
		}
#pragma endregion

#pragma region TASK2
	case 2:
	{
		cout << "Дано целое число от 1 до 365.\n";
		cout << "Определить, какой день недели выпадает на это число, если 1 января – понедельник.\n";
		int c;
		cout << "Введите число от 1 до 365 - ";
		cin >> c;
		cout << "\n";
		int b = c % 7;
		enum Days D;

		if (c >= 1 && c <= 365)
		{
			switch (b)
			{
			case Sun: cout << "Воскресенье\n";
				break;
			case Mon: cout << "Понедельник\n";
				break;
			case Tue: cout << "Вторник\n";
				break;
			case Wen: cout << "Среда\n";
				break;
			case Thur: cout << "Четверг\n";
				break;
			case Fri: cout << "Пятница\n";
				break;
			case Sat: cout << "Суббота\n";
				break;
			}

		}
	}


#pragma endregion

#pragma region TASK3

	case 3:
	{
	task3:
		cout << "Дано трехзначное число.Определить:\n";
		cout << "a.является ли сумма его цифр двухзначным числом;\n";
		cout << "b.является ли произведение его цифр трехзначным числом\n";

		int a;
		cout << "Введите трехзначное число - ";
		cin >> a;
		int b = a / 100;
		int c = a % 10;
		int d = (a % 100) / 10;
		if (a < 100 || a > 999)
		{
			cout << "Ошибка\n";
			goto task3;
		}
		else if ((b + c + d) >= 10 || (b + c + d) <= 99)
		{
			cout << "Сумма трех цифр числа " << a << " равная " << b + c + d << " является двузначным\n";

			if ((b * c * d) >= 100 || (b * c * d) <= 999)
			{
				cout << "Произведение трех цифр числа " << a << " равное " << b * c * d << " является трехзначным\n";
			}
		}

	}


#pragma endregion

#pragma region TASK4
	case 4:
	{
		/*cout << "Рейтинг бакалавра заочного отделения при поступлении\n";
		cout << "в магистратуру определяется средним баллом по диплому, \n";
		cout << "умноженным на коэффициент стажа работы по специальности, \n";
		cout << "который равен: нет стажа – 1, меньше 2 лет – 13, от 2 до 5 лет – 16. \n";
		cout << "Составить программу расчета рейтинга при заданном среднем \n";
		cout << "балле диплома (от 3 до 5) и вывести сообщение о приеме \n";
		cout << "в магистратуру при проходном балле 45.\n";
		rey = sr * koef */
	}


#pragma endregion

#pragma region TASK 5
	case 5:
	{
		cout << "если полнолуние это 27.08 \n";
		cout << "то при введении даты, нужно узнать полнолуние ли это,\n";
		cout << "Если нет, то сказать, сколько дней до следующего полнолуния\n";

		float a = 0;
		cout << "Введите дату в формате 00.00 - ";
		cin >> a;


		
	}

#pragma endregion

	}
}
	
/*HANDLE hConsole;

int Myint;

MyEnum Error;
cout << ErrorOfSMTH;

	int color = 4;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);*/