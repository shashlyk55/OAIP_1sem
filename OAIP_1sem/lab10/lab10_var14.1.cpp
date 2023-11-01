#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	unsigned int A, B;
	int n = 2, p = 5, q, m, i = 0, x = 0, one = 0, zero = 0;
	unsigned int mask1 = 1 << 31;
	const int SIZE = 32;
	char binA[SIZE] = {}, binB[SIZE] = {}, fromAtoB[2] = {};
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
	for (int k = 26; k >= 21; k--)
	{
		if (binA[k] == '1') one++;
		if (binA[k] == '0') zero++;
	}
	cout << "единицы " << one << endl << "нули " << zero;
	


}