#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	const int SIZE = 5;
	int a[SIZE] = {}, max, min, i = 0;
	for (i = 0; i < SIZE; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < SIZE; i++)   //���������� max
	{
		if (a[i] > 0)
		{
			max = a[i];
			for (i = 0; i < SIZE; i++)
			{
				if (a[i] > max)
				{
					max = a[i];
				}
			}
		}
	}
	for (i = 0; i < SIZE; i++)   //���������� min
	{
		if (a[i] < 0)
		{
			min = a[i];
			for (i = 0; i < SIZE; i++)
			{
				if (a[i] < min)
				{
					min = a[i];
				}
			}
		}
	}
	cout << "������������ ������������� " << max << endl << "����������� ������������� " << min << endl;
}