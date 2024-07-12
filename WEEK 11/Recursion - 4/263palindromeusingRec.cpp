# include <iostream>
# include <string>
using namespace std;
bool isPalindrome(string st, int j, int i) {
    if(i>j) return true;
    if(st[i] != st[j]) return false;
    else return isPalindrome(st,j-1,i+1);
}
int main() {
    string s = "mom";
    cout << isPalindrome(s,s.length()-1,0);
}