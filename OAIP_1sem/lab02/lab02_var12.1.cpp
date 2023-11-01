/*
t = tg(x) + r * (1 - ln(x))
u = t / (x^3 + 1) / (1 - e^(k - 4))
k = 6
r = 5 * 10^(-7)
x = 0,095
*/


#include<iostream>
using namespace std;

void main()
{
	float t, u, r = 5 * pow(10, -7), x = 0.095;
	int k = 6;
	t = tan(x) + r * (1 - log(x));
	u = t / (pow(x, 3) + 1) / (1 - exp(k - 4));
	cout << "t=" << t << '\n';
	cout << "u=" << u << '\n';
}