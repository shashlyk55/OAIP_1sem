/*
y = a * e^(-2 * b) - (1 + a)^0,5
r = ln(1 + 20 * b) / (1 + a)
a = 1,75
b = 4,5 * 10^(-4)
*/


#include<iostream>
using namespace std;
void main()
{
	double a = 1.75, b = 4.5 * pow(10, -4), y, r;
	y = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	cout << "y=" << y << '\n';
	cout << "r=" << r << '\n';
}