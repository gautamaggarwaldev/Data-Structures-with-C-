# include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    int len = s.length();  //even
    cout << s.substr(len/2);
}