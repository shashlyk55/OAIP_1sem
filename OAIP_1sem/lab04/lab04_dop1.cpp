/*
����������� ���������� ���������-����������� ��� ����� ����� � ���������� %, /, +, -, *.
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	int a,b,c;
	cout << "�������� �������� � ����� �������: "<<endl
		<<"1.��������" << endl
		<< "2.��������" << endl
		<< "3.���������" << endl
		<< "4.�������" << endl
		<< "5.������� � ��������" << endl;
	cin >> c;
	cout << "������� ������ ����� " << endl;
	cin >> a;;
	cout << "������� ������ ����� " << endl;
	cin >> b;
	cout << "��������� ";
	switch (c)
	{
	case 1:
		cout << a + b;
		break;
	case 2:
		cout << a - b;
		break;
	case 3:
		cout << a * b;
		break;
	case 4:
		if (b != 0)
			cout << a / b;
		else
			cout << "������";
		break;
	case 5:
		if (b != 0)
			cout << a % b;
		else
			cout << "������";
		break;
	}

}