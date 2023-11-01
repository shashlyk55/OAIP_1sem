#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	const int maxn = 100;
	int a[maxn]{}, i = 0, n, min = 99, max = 0, maxi, mini, NEWa[maxn]{};
	cout << "Введите количество элементов массива от 1 до 99: ";					//mini индекс максимального значения max
	cin >> n;																		//maxi индекс минимального значения min
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
		if (a[i] > max)
		{
			max = a[i];
			maxi = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			mini = i;
		}
	}
	cout << endl << "max = " << max << " индекс " << maxi << endl;
	cout << "min = " << min << " индекс " << mini << endl;
	int k = 1;
	for (i = 0; i < n; i++)
	{
		NEWa[i] = a[i];
		if (i<maxi && i>mini)
		{
			NEWa[i] = a[maxi - k];
			k++;
		}
		if (i > maxi && i < mini)
		{
			NEWa[i] = a[mini - k];
			k++;
		}
		cout << NEWa[i] << " ";
	}
}