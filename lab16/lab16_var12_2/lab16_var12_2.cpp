#include<iostream>
using namespace std;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int i, j, sum = 0, x = 0, row, col, y = -1;
	cout << "row = ";
	cin >> row;
	cout << "col = ";
	cin >> col;
	float** a = new float* [row];
	for (i = 0; i < row; i++)
	{
		a[i] = new float[col];
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			a[i][j] = rand() % 10 - 5;
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (a[i][j] < 0)
			{
				cout << endl << j + 1 << endl << endl;
				for (j, i = 0; i < row; i++)
				{
					a[i][j] = a[i][j] / 2;
				}
				break;
			}
		}
		if (j < col)
		{
			break;
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	for (i = 0; i < row; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}