#include<iostream>
#include<cstring>
/*����������� ��������� � ���������� ������, ������� ������� ������ ������ �� ������, ���-��� � ��������� � �. �. */
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
