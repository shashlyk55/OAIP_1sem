#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");

	const int SIZE = 5;
	int a[SIZE] = {}, sum = 0;

	cout << "������� 5 ����� ����� " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum = sum + a[i];
		}
	}
	cout << "����� ���� ������ ��������� ����� " << sum << endl;
}