/*
�������� �������� ���� ����������: 
�) ��������� �������������� ����������; 
�) �� ��������� �������������� ����������
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b,temp;
	cout << "������� � ";
	cin >> a;
	cout << "������� b ";
	cin >> b;
	temp = a;
	a = b;
	b = temp;
	cout <<"a= " << a << endl <<"b= " << b << endl;

	int d, c;
	cout << "������� � ";
	cin >> c;
	cout << "������� d ";
	cin >> d;
	d = d + c;
	c = d - c;
	d = d - c;
	cout<<"c= " << c << endl<<"d= " << d;

}