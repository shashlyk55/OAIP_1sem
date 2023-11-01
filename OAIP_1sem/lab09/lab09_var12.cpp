#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	const int MAXn=100;
	int t[MAXn]={},min=99;
	int i = 0, n = 0;
	cout << "¬ведите количество элементов массива от 1 до 99 " << endl;
	cin >> n;
	if (n > 100) return;
	for (i = 0; i < n; i++)
	{
		t[i] = rand() % 99;
		cout << t[i] << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++)//min
	{
		if (t[i] < min)
		{
			min = t[i];
		}
	}cout <<"min = " << min << endl;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			t[i] = min;
		}
		if (i % 2 == 0)
		{
			t[i] = min;
		}
		cout << t[i] << " ";
	}
}