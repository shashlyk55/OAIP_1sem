/*
��������� ���������� ����� �������� ����������� ����� x, y � z
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	int x, y, z,i;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	cout << "z= ";
	cin >> z;
	if (x < y)
	{
		if (x < z)
		{
			cout << "���������� ����� " << x << endl;
			for (i = x; i > 0; i--)
			{
				if (x % i == 0 && y % i == 0 && z % i == 0)
				{
					cout << "NOD = " << i << endl;
					break;
				}
			}
		}
	}
	else
	{
		if (z < y)
		{
			cout << "���������� ����� " << z << endl;
			for (i = z; i > 0; i--)
			{
				if (x % i == 0 && y % i == 0 && z % i == 0)
				{
					cout << "NOD = " << i << endl;
					break;
				}
			}
		}
		else
		{
			cout << "���������� ����� " << y << endl;
			for (i = y; i > 0; i--)
			{
				if (x % i == 0 && y % i == 0 && z % i == 0)
				{
					cout << "NOD = " << i << endl;
					break;
				}
			}
		}
	}

	



}