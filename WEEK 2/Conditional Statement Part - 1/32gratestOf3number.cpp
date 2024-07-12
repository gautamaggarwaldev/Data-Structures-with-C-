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

    if(x > y && x > z) {
        cout << x << " is greatest";
    }
    if(y > x && y > z) {
        cout << y << " is greatest";
    }
    if(z > x && z > y) {
        cout << z << " is greatest";
    }
}