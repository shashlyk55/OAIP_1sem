#include<iostream>
using namespace std;
void main()
{
	srand(time(NULL));
	int row, col, i, j, c = 0;
	cout << "row = ";
	cin >> row;
	cout << "col = ";
	cin >> col;
	int** a = new int* [row];
	for (i = 0; i < row; i++)
	{
		*(a + i) = new int[col];
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			a[i][j] = rand() % 13 - 10;
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (a[i][j] > 0)
			{
				c = i;
				break;
			}
		}
		if (j < col)
		{
			break;
		}
	}
	printf("\n%d\n\n" ,c+1);
	
	for (j = 0; j < col; j++)
	{
		a[c-1][j] = a[c-1][j] * (-1);
	}
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i < row; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}

