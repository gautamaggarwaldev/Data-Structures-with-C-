# include <iostream>
# include <stack>
using namespace std;

string solve(string val1, string val2, char ch) {
    return val1 + val2 + ch;
}
int main() {
    string s = "-/*+79483";
    stack<string>val;
    int n = s.length();
    for(int i=n-1;i>=0;i--) {
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48)); // digit
        else { // operator
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }      
    }
    cout << val.top() <<endl;
}