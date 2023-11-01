#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	const int SIZE = 5;
	int a[SIZE] = {}, i = 0, n = 0, sum = 0;
	for (i=0; i < SIZE; i++)
	{
		cin >> a[i];
	}
	for (i=0; i < SIZE; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum = sum + a[i];
			n++;
		}
	}
	cout << "Среднее арифметическое нечетных элементов равно " << float(sum / n) << endl;
}
