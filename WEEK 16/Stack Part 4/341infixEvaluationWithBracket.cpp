# include <iostream>
# include <stack>
using namespace std;
int prio(char ch) {
    if(ch=='+' || ch=='-') return 1;
    else return 2;  //* || /
}
int solve(int val1, int val2, char ch) {
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main() {
    string s = "(5+9)*4/8-3";
    stack<int>val;
    stack<char>op;
    int n = s.length();
    for(int i=0;i<n;i++) {
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48); // digit
        else {
            if(op.size()==0) op.push(s[i]); // operator
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')') {
                while(op.top()!='(') { //work
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if( prio(s[i])>prio(op.top())) op.push(s[i]);
            else {
                while(op.size()>0 && prio(s[i])<=prio(op.top())) { //work
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0) {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout << val.top() <<endl;
    cout << (5+9)*4/8-3;
    
}