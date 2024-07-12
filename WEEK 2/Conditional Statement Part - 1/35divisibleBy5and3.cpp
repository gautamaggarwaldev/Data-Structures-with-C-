#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(n % 3 == 0) {
        if(n % 5 == 0) {
            cout << "divisible by 5 and 3 both";
        }
        else {
            cout << "not matching a condition";
        }
    }
    else {
        cout << "not matching a condition";
    }
}