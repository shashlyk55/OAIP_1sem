//нарисовать знак плюс закрашенный введенным символом

#include<iostream>
#include<iomanip>
using namespace std;

void main()
{	

	int b = 1;
	char a, p=' ';

	cin >> a;

	do
	{
		cout << setw(20) << setfill(p) << p;
		cout << setw(16) << setfill(a) << a << endl;
		b++;
	}
	while (b <= 10);

	do
	{
		cout << setw(56) << setfill(a) << a << endl;
		b++;
	} 
	while (b <= 18);

	do
	{
		cout << setw(20) << setfill(p) << p;
		cout << setw(16) << setfill(a) << a << endl;
		b++;
	}
	while (b <= 28);

}