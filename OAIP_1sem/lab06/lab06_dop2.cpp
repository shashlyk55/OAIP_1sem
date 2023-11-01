/*
Составить алгоритм,  определяющий,  сколько существует способов набора одного рубля 
при помощи монет досто-инством 50коп., 20коп., 5коп. и 2коп.
*/

#include<iostream>
using namespace std;
void main()
{
	int rub=100,i=0;
	float cop50,cop20,cop5,cop2;
	for (cop50=0;cop50<=2;cop50++)
	{
		for (cop20 = 0; cop20 <= 5; cop20++)
		{
			for (cop5 = 0; cop5 <= 20; cop5++)
			{
				for (cop2 = 0; cop2 <= 50; cop2++)
				{
					if (rub == (cop50 * 50 + cop20 * 20 + cop5 * 5 + cop2 * 2))
					{
						i++;
						cout << i << endl;
					}
				}
			}
		}
	}
}