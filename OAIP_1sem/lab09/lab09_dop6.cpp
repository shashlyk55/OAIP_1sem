#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	const int maxn = 100;
	int a[maxn]{}, i = 0, n, t;
	double f = 1.618034;
	cout << "¬ведите количество элементов массива от 1 до 99: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	for (i = 0; i < n; i++)
	{
		for (t = 0; t < 12; t++)
		{
			int num = (pow(f, t) - pow((1 - f), t)) / sqrt(5);
			if (a[i] == num)
			{
				cout << endl << "число фибоначи " << a[i] << " с индексом " << i << endl;
			}
		}
	}
}