/*
Нарисовать домик, закрашенный введенным символом
*/

#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
	char a, p=' ',b=1;
	cin >> a;

	cout << setw(20) << setfill(p) << p;
	cout << a << endl;

	cout << setw(19) << setfill(p) << p;
	cout << setw(3) << setfill(a) << a<<endl;

	cout << setw(18) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a<<endl;

	cout << setw(17) << setfill(p) << p;
	cout << setw(7) << setfill(a) << a<<endl;

	cout << setw(16) << setfill(p) << p;
	cout << setw(9) << setfill(a) << a<<endl;

	cout << setw(15) << setfill(p) << p;
	cout << setw(11) << setfill(a) << a << endl;

	cout << setw(14) << setfill(p) << p;
	cout << setw(13) << setfill(a) << a << endl;

	do
	{
		cout << setw(15) << setfill(p) << p;
		cout << setw(11) << setfill(a) << a << endl;
		b++;
	} 
	while
		(b < 7);
}