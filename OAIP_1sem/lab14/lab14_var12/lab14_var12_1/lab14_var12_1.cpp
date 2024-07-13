#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, max, i, c = 0;
	cout << "n = ";
	cin >> n;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		*(a + i) = rand() % 10;
		cout << *(a + i) << " ";
		if (i == 0)
		{
			max = a[i];
		}
		if (max < *(a + i))
		{
			max = *(a + i);
		}
	}
	for (i = 0; i < n; i++)
	{
		if (max == *(a + i))
		{
			c++;
		}
	}
	delete[] a;
	cout << endl << "max = " << max << endl << "c = " << c << endl;

}