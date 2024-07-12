#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if((ch >= 65 && ch <= 90)  ||  (ch >= 97 && ch <= 122)) {    //  &&    >   ||
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
        || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            cout << "it is a vowel";
        }
        else {
            cout << "it is consonant";
        }
    }
    else {
        cout << "it is not an alphabet";
    }
}