#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	const int maxn = 100;
	int a[maxn]{}, i = 0, n, x = 0;
	cout << "Введите количество элементов массива от 1 до 99: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 20;
		cout << a[i] << " ";
		if (a[i] == a[i - 1])
		{
			cout << " W " << a[i] << " W ";
			x = x + 1;
		}
	}cout << endl << "Количество пар " << x;
}