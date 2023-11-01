/*
ƒано  натуральное число n.  
ѕолучить его каноническое разложение (разложение на простые множители).
*/

#include <iostream>
using namespace std;
void main()
{
    int n, a = 2;
    cout << "N = ";
    cin >> n;
    cout << n << " = 1";
    while (n > 1)
    {
        while (n % a == 0)
        {
            cout << " * "<< a;
            n = n / a;
        }
        if (a == 2) 
            a++;
        else 
            a += 2;
    }
}
