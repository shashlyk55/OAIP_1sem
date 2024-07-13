#include<iostream>
using namespace std;

void fillArr2(int** arr, int a, int b)
{
	srand(time(NULL));
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			//cin >> arr[i][j];
			arr[i][j] = rand() % 3;
		}
		cout << endl;
	}
}
void printArr(int** arr, int a, int b)
{
	srand(time(NULL));
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void main()
{
	srand(time(NULL));
	int temp, min, col, row, i, j;
	cout << "col ";
	cin >> col;
	cout << "row ";
	cin >> row;
	int** f = new int* [row];
	for (i = 0; i < row; i++)
	{
		*(f + i) = new int[col];
	}

	int k, x, y, c = 0;
	fillArr2(f, row, col);
	printArr(f, row, col);

	for (x = 0, j = 0; j < 4; x++, j++)
	{
		for (y = 0, i = 0; i < 4; y++, i++)
		{
			if (f[i][j] == f[x][y])
			{
				c++;
				if (c == 4)
				{
					k = c;
				}
			}
			c = 0;
		}
	}
	cout << "\n\nk = " << k;
	for (i = 0; i < row; i++)
	{
		delete[] f[i];
	}
	delete[] f;
}
