/*
ѕомен€ть значени€ двух переменных: 
а) использу€ дополнительную переменную; 
б) не использу€ дополнительной переменной
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b,temp;
	cout << "¬ведите а ";
	cin >> a;
	cout << "¬ведите b ";
	cin >> b;
	temp = a;
	a = b;
	b = temp;
	cout <<"a= " << a << endl <<"b= " << b << endl;

	int d, c;
	cout << "¬ведите с ";
	cin >> c;
	cout << "¬ведите d ";
	cin >> d;
	d = d + c;
	c = d - c;
	d = d - c;
	cout<<"c= " << c << endl<<"d= " << d;

}