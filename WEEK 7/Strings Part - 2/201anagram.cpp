# include <iostream>
# include <algorithm>
using namespace std;
int main() {
    string s,t;
    cout << "Enter string 1 : ";
    getline(cin ,s);
    cout << "Enter string 2 : ";
    getline(cin ,t);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    bool flag = false;
    if(s == t) flag = true;
    if(flag) cout << "Yes anagram";
    else cout << "No anagram";
}