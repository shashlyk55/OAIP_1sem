#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int ci = 10, cj = 10;
	int a[ci][cj] = {}, n, m, k, sum = 0, mul = 1;
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
	cout << endl;
	
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (abs(a[i][j]) < i && a[i][j] < 0 && a[i][j] % 2 != 0)
			{
				sum += a[i][j];
				mul *= a[i][j];
			}
		}
	}
	cout << endl << "sum = " << sum << endl << "mul = " << mul;
}
