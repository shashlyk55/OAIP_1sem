/*
����� �� ������� �������� a*b*c ��������� � ������� �������� r*s*t? ������ ���������� ������
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");

	int a, b, c,r,s,t;
	cout << "������� ������� ������� "<<endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b; 
	cout << "c=";
	cin >> c;

	cout << "������� ������� ������� "<<endl;
	cout << "r=";
	cin >> r; 
	cout << "s=";
	cin >> s;
	cout << "t=";
	cin >> t;
	
	if (a > b)
		cout << "������� �� ����������";
	else
		if (b > s)
			cout << "������� �� ����������";
		else	
			if (c > t)
				cout << "������� �� ����������";
			else
				cout << "������� ��������";

}