/*
Разработать консольную программу-калькулятор для целых числе с операциями %, /, +, -, *.
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	int a,b,c;
	cout << "Выберите действие с этими числами: "<<endl
		<<"1.Сложение" << endl
		<< "2.Разность" << endl
		<< "3.Умножение" << endl
		<< "4.Деление" << endl
		<< "5.Деление с остатком" << endl;
	cin >> c;
	cout << "Введите первое число " << endl;
	cin >> a;;
	cout << "Введите второе число " << endl;
	cin >> b;
	cout << "Результат ";
	switch (c)
	{
	case 1:
		cout << a + b;
		break;
	case 2:
		cout << a - b;
		break;
	case 3:
		cout << a * b;
		break;
	case 4:
		if (b != 0)
			cout << a / b;
		else
			cout << "Ошибка";
		break;
	case 5:
		if (b != 0)
			cout << a % b;
		else
			cout << "Ошибка";
		break;
	}

}