#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	unsigned int A, B;
	int n, m, x = 0, n1 = 0;
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
	}cout << endl << "n ";
	cin >> n;
	n = 31 - n;
	for (n,x=0;x<3; n--, x++)
	{
		fromAtoB[x] = binA[n];
	}
	cout << endl << "m ";
	cin >> m;
	
	for (x = 2; x >= 0; x--)
	{
		cout << fromAtoB[x];
	}
	cout << endl;

	m = 33 - m;
	for (int i=m-4,x=2;x>=0;x--,i++)
	{
		binB[i] = fromAtoB[x];
	}
	for (int i = 0; i <= 31; i++)
	{
		cout << binB[i];
		if ((i + 1) % 8 == 0) cout << ' ';
	}

}