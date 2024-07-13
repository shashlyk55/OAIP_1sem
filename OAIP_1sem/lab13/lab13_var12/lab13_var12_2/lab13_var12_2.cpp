#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int ci = 10, cj = 10;
	int a[ci][cj] = {}, n, m, k = 0;
	cout << "Ведите n ";
	cin >> n;
	cout << "Ведите m ";
	cin >> m;
	for (int j = 0; j < m; j++)
	{
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			a[i][j] = rand() % 20 - 10;
			cout << a[i][j] << "\t";
		}
	}
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i][j] > 0)
			{
				k++;
				break;
			}
		}
	}
	cout << "\n\n";
	if (k == m)
	{
		for (int j = 0; j < m; j++)
		{
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				a[i][j] = a[i][j] * (-1);
				cout << a[i][j] << "\t";
			}
		}
	}
	else
		cout << "Не все строки имеют положительные элементы " << endl;
}