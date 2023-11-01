/*
c = 2 * sin(f / 2) + ln(f)
d = y * e^(-2 * r) + f ,если c >= 3
d = y - y^3 ,если c <3
f = -125 * 10^(-8)
y = 1,7
t = 1(0,1)2
*/

#include<iostream>
using namespace std;
void main()
{
	float c, y = 1.7, d, f = -125 * pow(10, -6),t=1;

	for(t=1;t<=2;t=t+0.1)
	{
		c = 2 * sin(f / 2) + log(t);
		cout << c << endl;
		if (c >= 3)
		{
			d = y * exp(-2 * t) + f;
		}
		else
		{
			d = y - pow(y, 3);
		}
		cout << d << endl;
		
		
	}
}
