#include <iostream>
using namespace std;
int main()
{
    // float x = 7.5;
    // int y;
    // y = (int)x;
    // cout << y;

    bool x = true , y = false;
    cout << x + 10 << endl;     // 1 + 10 = 11
    cout << y + 10 << endl;    // 0 + 10 = 10

    char ch = 'e';
    cout << (int)ch << endl;      //conversio char to int data type by manually
    cout << ch + 400 << endl;    //convert char to int data type automatically



    char chh = 'N';
    int r = (int)chh;
    cout << r - 64;
}