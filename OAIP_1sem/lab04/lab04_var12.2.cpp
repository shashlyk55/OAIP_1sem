/*
�� �������� ���������� �, ����������� ����� � ����������, 
������, ����������� ��� �����������, ���������� ����� � ������.
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");

	int x,y;
	cout << "������� ����������:";
	cin >> x;
	cout << "1.��" << "\n" << "2.��" << "\n" 
		<< "3.�" << "\n" << "4.��" << "\n";
	cout << "�������� ������ ������� ���������: ";
	cin >> y;

	switch (y)
	{
	case 1:
		cout << x * 0.001 << "�";
		break;
	case 2:
		cout << x * 0.1 << "�";
		break;
	case 3:
		cout << x << "�";
		break;
	case 4:
		cout << 1000 * x<<"�";
		break;
	}
	


}