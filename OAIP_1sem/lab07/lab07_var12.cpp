#include<iostream>
using namespace std;
void main()
{
	float x[5] = { 1, 2.7, 4.7, 6 ,10}, z, y,max=x[0],sum=0;
	for (int i=0;i<=5;i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
	}
	z = max;
	for (int i = 1; i <= 4; i++)
	{
		sum += pow(x[i],2);
	}
	y = z * sum;
	cout << y << endl;
}