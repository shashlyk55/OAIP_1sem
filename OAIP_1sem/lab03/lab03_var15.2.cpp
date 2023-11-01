/*
Определить номера подъезда и этажа по номеру квартиры девятиэтажного дома, 
считая, что на каждом этаже ровно 4 квартиры, 
а нумерация квартир начинается с первого подъезда
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	//a-квартиры ,b-этаж,с-подъезд
	int a, b, c;

	cout << "Введите номер квартиры ";
	cin >> a;

	c = a / 40;

	cout << "Подъезд ";
	if (a % 40 != 0)
	{
		cout << c + 1 << endl;
	}
	else
	{
		cout << c << endl;
	}
	
	b = (a / 4)-(c*10);

	cout << "Этаж ";

	if (a % 4 != 0)
		cout << b + 1 << endl;
	else
		cout << b << endl;




	
	

}