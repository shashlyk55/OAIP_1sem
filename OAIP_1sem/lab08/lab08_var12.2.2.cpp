#include<iostream>
using namespace std;
void main()//3
{
	float a, b, e = 0.0001, x1, x;//õ=0.7
	cin >> a >> b;
	if (((exp(a) + 2 * pow(a, 2) - 3)*(exp(a)+(4*a)))>0)
	{
		x1 = a;
	}
	else {
		x1 = b;
	}
	do {
		x = x1;
		x1 = x - ((exp(x) + 2 * pow(x, 2) - 3) / (exp(x) + (4 * x)));
	} while (abs(x1 - x) > e);
	cout << x1;
}