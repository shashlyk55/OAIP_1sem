#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	unsigned int A, B;
	int n, p, q, m, i = 0, x = 0;
	unsigned int mask1 = 1 << 31;
	const int SIZE = 32;
	char binA[SIZE] = {}, binB[SIZE] = {}, fromAtoB[32] = {};
	cout << "������� � ";
	cin >> A;
	cout << "�������� ��� ����� �: ";
	for (int i = 0; i < 32;i++)
	{
		char bitChar = (mask1 & A ? '1' : '0');
		binA[i] = bitChar;
		cout << bitChar;
		A = A << 1;
		if ((i + 1) % 8 == 0) cout << ' ';
	}
	cout << endl << "������� B ";
	cin >> B;
	cout << "�������� ��� ����� B: ";
	for (int i = 0; i < 32; i++)
	{
		char bitChar = (mask1 & B ? '1' : '0');
		binB[i] = bitChar;
		cout << bitChar;
		B = B << 1;
		if ((i + 1) % 8 == 0) cout << ' ';
	}
	cout << endl << "������� n ���������� �����: ";
	cin >> n;
	cout << endl << "������� p �������: ";
	cin >> p;
	cout << "����� � � ������   ";
	p = abs(p - 31);
	for (int i = 0; i < 32; i++)
	{
		if (i == p)
		{
			p = i;
			for (i, x = 0; i < p + n; i++, x++)
			{
				fromAtoB[x] = binA[i];
				binA[i] = '0';
				cout << binA[i];
				if ((i + 1) % 8 == 0) cout << ' ';
			}
		}
		cout << binA[i];
		if ((i + 1) % 8 == 0) cout << ' ';
	}
	cout << endl << "������� m ��������� �����: ";
	cin >> m;
	cout << endl << "������� q �������: ";
	cin >> q;
	q = abs(q - 31);
	int q1 = q-m+1;
	for (i, q1, x = 0; x<m; q1++, i++, x++)
	{
		binB[q1] = fromAtoB[x];
	}

	cout << endl << "���������� ����� � ";
	for (int i = 0; i < 32; i++)
	{
		cout << binB[i];
		if ((i + 1) % 8 == 0) cout << ' ';
	}
	cout << endl;

}