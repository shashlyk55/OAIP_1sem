#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	unsigned int A, B;
	int n = 2, p = 5, q, m, i = 0, x = 0, one = 0, zero = 0;
	unsigned int mask1 = 1 << 31;
	const int SIZE = 32;
	char binA[SIZE] = {}, binB[SIZE] = {}, fromAtoB[3] = {};
	cout << "Введите А ";
	cin >> A;
	cout << "Двоичный вид числа А: ";
	for (int i = 0; i < 32; i++)
	{
		char bitChar = (mask1 & A ? '1' : '0');
		binA[i] = bitChar;
		cout << bitChar;
		A = A << 1;
		if ((i + 1) % 8 == 0) cout << ' ';
	}
	cout << endl << "Введите B ";
	cin >> B;
	cout << "Двоичный вид числа B: ";
	for (int i = 0; i < 32; i++)
	{
		char bitChar = (mask1 & B ? '1' : '0');
		binB[i] = bitChar;
		cout << bitChar;
		B = B << 1;
		if ((i + 1) % 8 == 0) cout << ' ';
	}
	cout << endl;
	for (int i = 29, k = 0; i>26; i--, k++)
	{
		fromAtoB[k] = binA[i];
		cout << fromAtoB[k];
	}
	for (int i = 30, k = 0; i>27; i--, k++)
	{
		binB[i] = fromAtoB[k];
	}
	cout << endl;
	for (int i = 0; i < 32; i++)
	{
		cout << binB[i];
		if ((i + 1) % 8 == 0) cout << ' ';
	}
}

