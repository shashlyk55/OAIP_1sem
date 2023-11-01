#include<iostream>
using namespace std;
void main()
{
    unsigned int number_A, B=0;
    char number_A_binary[32];
    const unsigned int mask = 1 << 31;
    using namespace std;
    setlocale(LC_ALL, "ru");
    cout << "Введи число: ";
    cin >> number_A;
    cout << "Число А в двоичном виде:\t   ";

    for (int i = 0; i < 32; i++)
    {
        char bitChar = (mask & number_A ? '1' : '0');
        number_A_binary[i] = bitChar;
        putchar(bitChar);
        number_A <<= 1;
        if ((i + 1) % 8 == 0) putchar(' ');
    }
    cout << endl;
    for (int i = 24; i < 29; i++) {
        number_A_binary[i] = number_A_binary[i] == '1' ? '0' : '1';
    }
    cout << endl;
    cout << "Число А с инвертированными битами: ";
    for (int i = 0; i < 32; i++) {
        cout << number_A_binary[i];
        if ((i + 1) % 8 == 0) putchar(' ');
    }
    cout << endl;
}
