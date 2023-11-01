#include<iostream>
using namespace std;

void main()//2
{
	float n = 200, s1 = 0, s2 = 0, i = 1, a = 5, b = 11, x, h, z;
	h = (b - a) / (2 * n);
	x = a + (2 * h);
	do
	{
		s2 = s2 + exp(x) + 2;
		x = x + h;
		s1 = s1 + exp(x) + 2;
		x = x + h;
		i++;
	} while (i < n);
	z = (h / 3) * ((exp(a) + 2) + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + (exp(b) + 2));
	cout << "z = " << z;
}