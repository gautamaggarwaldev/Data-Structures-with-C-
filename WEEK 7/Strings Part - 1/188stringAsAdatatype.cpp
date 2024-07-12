# include <iostream>
using namespace std;
int main() {
    // string str = "Gautam Aggarwal is a student";
    // cout << str << endl;
    // cout << str[0];

    string s;
    // cin >> s; // only if the given string has no spaces
    getline(cin,s); // v.imp
    cout << s;
}