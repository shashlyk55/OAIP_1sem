/*
���������� ������ �������� � ����� �� ������ �������� �������������� ����, 
������, ��� �� ������ ����� ����� 4 ��������, 
� ��������� ������� ���������� � ������� ��������
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	//a-�������� ,b-����,�-�������
	int a, b, c;

	cout << "������� ����� �������� ";
	cin >> a;

	c = a / 40;

	cout << "������� ";
	if (a % 40 != 0)
	{
		cout << c + 1 << endl;
	}
	else
	{
		cout << c << endl;
	}
	
	b = (a / 4)-(c*10);

	cout << "���� ";

	if (a % 4 != 0)
		cout << b + 1 << endl;
	else
		cout << b << endl;




	
	

}