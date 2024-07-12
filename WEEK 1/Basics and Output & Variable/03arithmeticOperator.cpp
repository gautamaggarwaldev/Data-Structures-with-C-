#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int y = 2;
    cout << "x/y = " << x / y << endl;    // return integer

    // increament and decreament
    int a = 5;
    cout << a++ << endl;    //post increament  a++ = a+1
    cout << a << endl;

    int b = 8;
    cout << ++b << endl;   //pre increament   ++b = b+1
    cout << b << endl;

    int c = 6;
    cout << c-- << endl;   //post decreament   c-- = c-1
    cout << c << endl;

    int d = 4;
    cout << --d << endl;   //pre decreament   --d = d-1
    cout << d << endl;


}