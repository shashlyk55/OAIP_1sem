/*
Разделить число m на две части, разность которых равна 5
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	float m, a, b;
	cout << "Введите число m ";
	cin >> m;
	a = (m / 2) + 2.5;
	b = (m / 2)-2.5;
	cout <<"a= " << a << endl
	<<"b= " << b;
	
}