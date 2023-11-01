/*
y = (m - b) / (sin(a) - e^a)
z = 3 * y + (a - 4 * j * b)^0,5
b = 0,5
m = 8
a = 2,4 * 10^(-4)
j = {1,7;2,9;-8}
*/

#include<iostream>
using namespace std;
void main()
{
	const int n = 3;
	float b = 0.5, a = 10,y,z,j[n] = {1.7,2.9,-8};
	int m = 8,i;
	for (i=0;i<n;i++)
	{
		y = (m - b) / (sin(a) - exp(a));
		z = 3 * y + sqrt(a - 4 * j[i] * b);
		cout << "y=" << y << endl;
		cout << "z=" << z << endl;
	}

}