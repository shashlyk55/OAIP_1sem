/*
Нарисовать шестиугольник по центру консольного окна, закрашенный введенным символом.
*/

#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");
	
	char a, p = ' ';
	cout << "Введите символ: ";
	cin >> a;

	cout << setw(20) << setfill(p) << p 
		<< setw(6) << setfill(a) << a<<endl;
	cout << setw(19) << setfill(p) << p
		<< setw(8) << setfill(a) << a << endl;
	cout << setw(18) << setfill(p) << p
		<< setw(10) << setfill(a) << a << endl;
	cout << setw(17) << setfill(p) << p
		<< setw(12) << setfill(a) << a << endl;
	cout << setw(18) << setfill(p) << p
		<< setw(10) << setfill(a) << a << endl;
	cout << setw(19) << setfill(p) << p
		<< setw(8) << setfill(a) << a << endl;
	cout << setw(20) << setfill(p) << p
		<< setw(6) << setfill(a) << a << endl;
	

}