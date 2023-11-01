/*
По значению переменной Х, означающему длину в километрах, 
метрах, миллиметрах или сантиметрах, напечатать длину в метрах.
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");

	int x,y;
	cout << "Введите расстояние:";
	cin >> x;
	cout << "1.мм" << "\n" << "2.см" << "\n" 
		<< "3.м" << "\n" << "4.км" << "\n";
	cout << "Выберите нужную единицу измерения: ";
	cin >> y;

	switch (y)
	{
	case 1:
		cout << x * 0.001 << "м";
		break;
	case 2:
		cout << x * 0.1 << "м";
		break;
	case 3:
		cout << x << "м";
		break;
	case 4:
		cout << 1000 * x<<"м";
		break;
	}
	


}