#include<iostream>
using namespace std;
int main(){
    int a = 20;   // a means dividend
    int b = 3;   //  b means divisor
    int q,r;
    q = a/b;    //  q means quotent
    // a = b*q + r
    r = a - (b * q);   // r means remainder
    cout << r << endl;

    // OR

    // find remainder using modulus (%) operator
    cout << 20 % 3 << endl;
    cout << 7 % 3 << endl;
}