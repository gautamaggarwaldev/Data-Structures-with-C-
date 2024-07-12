#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "Enter decimal value : ";
    cin >> x;
    int y = (int)x;
    if(y<0)  y -= 1;
    cout << "fractional part of " << x  << " = " << (x - y);
}