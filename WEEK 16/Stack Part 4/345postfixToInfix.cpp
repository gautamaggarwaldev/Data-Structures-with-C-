# include <iostream>
# include <stack>
using namespace std;

string solve(string val1, string val2, char ch) {
    return val1 + ch + val2;
}
int main() {
    string s = "79+4*8/3-";
    stack<string>val;
    int n = s.length();
    for(int i=0;i<n;i++) {
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48)); // digit
        else { // operator
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }      
    }
    cout << val.top() <<endl;
}