/*
���� �������������� ����� x, y, z. ��������� min(x+y+z / 2, xyz)+max(xy, y).
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");

	int x, y, z,min,max;
	cout << "������� x= ";
	cin >> x;
	cout << "������� y= ";
	cin >> y;
	cout << "������� z= ";
	cin >> z;
	if (x + y + z / 2 > x * y * z)
		min = x * y * z;
	else
		min = x + y + z / 2;


	if (x * y > y)
		max = x * y;
	else
		max = y;

	cout <<"Max=" << max<<'\n';
	cout << "Min=" << min<<'\n';
	cout<<min + max;

}
