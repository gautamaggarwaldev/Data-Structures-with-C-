#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    cout << "Enter 1st number : ";
    cin >> x;
    cout << "Enter 2nd number : ";
    cin >> y;
    cout << "Enter 3rd number : ";
    cin >> z;

    if(x > y) {
        if(x > z) {
            cout << x << " is largest";
        }
        else {
            cout << z << " is largest";
        }
    }
    if(y > x) {  // else{}
        if(y > z) {
            cout << y << " is largest";
        }
        else {
            cout << z << " is largest";
        }
    }
    
}