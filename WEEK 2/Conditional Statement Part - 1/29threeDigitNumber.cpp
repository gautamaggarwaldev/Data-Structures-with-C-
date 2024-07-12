#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if(num > 99 && num <1000) {
        cout << "3 digit number";
    }
    else {
        cout << "Not a 3 digit number";
    }
}