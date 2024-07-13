#include<iostream>
#include<cstring>
/*Зашифровать введенную с клавиатуры строку, поменяв местами первый символ со вторым, тре-тий с четвертым и т. д. */
using namespace std;
void main()
{
	string str;
	cin >> str;
	
	char tmp, c;
	if (str.size() % 2 != 0) {
		c = str[str.size() - 1];
	}
	for (int i = 0; i < str.length(); i += 2)
	{
		tmp = str[i];
		str[i] = str[i + 1];
		str[i + 1] = tmp;	
	}
	str.push_back(c);
	
	cout << str;
}
