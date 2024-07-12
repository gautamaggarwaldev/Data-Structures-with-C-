#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter a number : ";
    cin >> x;
    // condition ? true : false
    (x % 2 == 0) ? cout << "even" : cout << "odd";
}