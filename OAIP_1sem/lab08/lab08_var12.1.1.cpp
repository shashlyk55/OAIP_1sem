#include<iostream>
using namespace std;

void main()//1
{
	float a = 5, b = 11, h, x, n = 200, s = 0;
	h = (b - a) / n;
	x = a;
	do
	{
		s = s + h*((exp(x)+2)+(exp(x+h)+2)) / 2;
		x = x + h;
	} while (x <= (b - h));
	cout << "s = " << s << endl;
}