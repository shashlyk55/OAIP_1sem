/*
Можно ли коробку размером a*b*c упаковать в посылку размером r*s*t? «Углом» укладывать нельзя
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");

	int a, b, c,r,s,t;
	cout << "Введите размеры коробки "<<endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b; 
	cout << "c=";
	cin >> c;

	cout << "Введиет размеры посылки "<<endl;
	cout << "r=";
	cin >> r; 
	cout << "s=";
	cin >> s;
	cout << "t=";
	cin >> t;
	
	if (a > b)
		cout << "Коробка не помещается";
	else
		if (b > s)
			cout << "Коробка не помещается";
		else	
			if (c > t)
				cout << "Коробка не помещается";
			else
				cout << "Коробка подходит";

}