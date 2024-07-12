#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if((ch >= 65 && ch <= 90)  ||  (ch >= 97 && ch <= 122)) {    //  &&    >   ||
        cout << "YES, it is an alphabet";
    }
    else {
        cout << "NO, it is not an alphabet";
    }
}