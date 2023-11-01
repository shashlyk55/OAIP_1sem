#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int MAX = 100;
	int A[MAX] = {}, B[MAX] = {}, nA, nB, a = 0,c=0,b=0;
	cout << "¬ведите количество элементов в массиве A ";
	cin >> nA;
	for (int i = 0; i < nA; i++)
	{
		*(A + i) = rand() % 10;
		cout << *(A + i) << " ";
	}
	printf("\n");
	cout << "¬ведите количество элементов в массиве B ";
	cin >> nB;
	for (int i = 0; i < nB; i++)
	{
		*(B + i) = rand() % 10;
		cout << *(B + i) << " ";
	}
	cout << endl;
	for (int k = 0; k < nA and k < nB;k++)
	{
		if (*(A + k) == *(B + k))a++;
		if (*(A + k) > *(B + k))b++;
		if (*(A + k) < *(B + k))c++;
	}
	cout << endl << a<<endl << b<<endl << c;
}