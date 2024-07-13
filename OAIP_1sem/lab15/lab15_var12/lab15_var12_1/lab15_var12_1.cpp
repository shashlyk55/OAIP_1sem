#include<iostream>
using namespace std;

void fillArr1(int** arr, int a, int b)
{
	srand(time(NULL));
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
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
void task1()
{
	setlocale(LC_ALL, "ru");
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
	}fillArr1(f, row, col);
	for (i = 0; i < row; i++)
	{
		min = f[i][0];
		for (j = 0; j < col; j++)
		{
			if (f[i][j] <= min)
			{
				min = f[i][j];
			}
			if (j == col - 1)
			{
				j = i;
				temp = min;
				min = f[i][j];
				f[i][j] = temp;
				break;
			}
		}
	}
	cout << endl << endl;
	printArr(f, row, col);
	for (int i = 0; i < row; i++)
	{
		delete[] f[i];
	}
	delete[] f;
}
void task2()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int temp, min, col=4, row=4, i, j;
	
	int** f = new int* [row];
	for (i = 0; i < row; i++)
	{
		*(f + i) = new int[col];
	}
	int k = -1, x, y, c = 0, q = 0;
	fillArr2(f, row, col);
	printArr(f, row, col);

	for (x = 0, j = 0; j < 4, x < 4; x++, j++)
	{
		for (y = 0, i = 0; i < 4, y < 4; y++, i++)
		{
			if (f[i][j] == f[x][y])
			{
				c++;
			}
			if (c == 4)
			{
				q = 4;
				k = j + 1;
			}
		}
		c = 0;
	}
	if (q == 4)
	{
		cout << endl << "строка и столбец под номером " << k;
	}
	else
		cout << endl << "нету таких";
	for (int i = 0; i < row; i++)
	{
		delete[] f[i];
	}
	delete[] f;
}
void main()
{
	int task;
	cout << "task ";
	cin >> task;
	switch (task)
	{
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	}
	
}