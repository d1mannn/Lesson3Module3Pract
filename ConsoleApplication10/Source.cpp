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

	cout << "������� ����� ������� - ";
	int task = 0;
	char yn = 0;
	cin >> task;
	switch (task)
	{

#pragma region TASK1
		task1 :
	case 1:
		cout << "������� ����� ����������� ����� -";
		int a;
		cin >> a;
		if (a < 10 && a > 99)
		{
			cout << "������� ������������ ����� - ";
			goto task1;
		}
		else
		{
			cout << "����� ���������� ������ �� � ���� ����� ����� 3 � 7\n";
			if ((a % 10) == 3 || (a % 10) == 7 || (a / 10) == 3 || (a / 10) == 7)
			{
				cout << "� ����� " << a << " ������ ����� 3 ��� 7\n";
			}
			else
			{
				cout << "������ ����� �� �������� ����� 3 ��� 7\n";
			}
		}
#pragma endregion

#pragma region TASK2
	case 2:
	{
		cout << "���� ����� ����� �� 1 �� 365.\n";
		cout << "����������, ����� ���� ������ �������� �� ��� �����, ���� 1 ������ � �����������.\n";
		int c;
		cout << "������� ����� �� 1 �� 365 - ";
		cin >> c;
		cout << "\n";
		int b = c % 7;
		enum Days D;

		if (c >= 1 && c <= 365)
		{
			switch (b)
			{
			case Sun: cout << "�����������\n";
				break;
			case Mon: cout << "�����������\n";
				break;
			case Tue: cout << "�������\n";
				break;
			case Wen: cout << "�����\n";
				break;
			case Thur: cout << "�������\n";
				break;
			case Fri: cout << "�������\n";
				break;
			case Sat: cout << "�������\n";
				break;
			}

		}
	}


#pragma endregion

#pragma region TASK3

	case 3:
	{
	task3:
		cout << "���� ����������� �����.����������:\n";
		cout << "a.�������� �� ����� ��� ���� ����������� ������;\n";
		cout << "b.�������� �� ������������ ��� ���� ����������� ������\n";

		int a;
		cout << "������� ����������� ����� - ";
		cin >> a;
		int b = a / 100;
		int c = a % 10;
		int d = (a % 100) / 10;
		if (a < 100 || a > 999)
		{
			cout << "������\n";
			goto task3;
		}
		else if ((b + c + d) >= 10 || (b + c + d) <= 99)
		{
			cout << "����� ���� ���� ����� " << a << " ������ " << b + c + d << " �������� ����������\n";

			if ((b * c * d) >= 100 || (b * c * d) <= 999)
			{
				cout << "������������ ���� ���� ����� " << a << " ������ " << b * c * d << " �������� �����������\n";
			}
		}

	}


#pragma endregion

#pragma region TASK4
	case 4:
	{
		/*cout << "������� ��������� �������� ��������� ��� �����������\n";
		cout << "� ������������ ������������ ������� ������ �� �������, \n";
		cout << "���������� �� ����������� ����� ������ �� �������������, \n";
		cout << "������� �����: ��� ����� � 1, ������ 2 ��� � 13, �� 2 �� 5 ��� � 16. \n";
		cout << "��������� ��������� ������� �������� ��� �������� ������� \n";
		cout << "����� ������� (�� 3 �� 5) � ������� ��������� � ������ \n";
		cout << "� ������������ ��� ��������� ����� 45.\n";
		rey = sr * koef */
	}


#pragma endregion

#pragma region TASK 5
	case 5:
	{
		cout << "���� ���������� ��� 27.08 \n";
		cout << "�� ��� �������� ����, ����� ������ ���������� �� ���,\n";
		cout << "���� ���, �� �������, ������� ���� �� ���������� ����������\n";

		float a = 0;
		cout << "������� ���� � ������� 00.00 - ";
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