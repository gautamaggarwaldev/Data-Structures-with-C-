// x+y>z   , x+z>y  ,  y+z>x
#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    cout << "Enter 1st side : ";
    cin >> x;
    cout << "Enter 2nd side : ";
    cin >> y;
    cout << "Enter 3rd side : ";
    cin >> z;

    if((x+y>z) && (x+z>y) && (y+z>x)){
        cout << x << y << z << " They can be a sides of a triangle";
    }
    else{
        cout << "invalid triangle";
    }
}