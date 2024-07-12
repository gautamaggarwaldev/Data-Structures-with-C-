# include <iostream>
# include <stack>
# include <algorithm>
using namespace std;
int main() {
    string s = "aaabbcddaabffgaavvvjkkklre";
    stack<char> st;
    int i=0;
    while(i<s.length()) {
        if(st.size()==0) {
            st.push(s[i]);
            i++;
        }
        else {
            if(st.top()==s[i]) i++;
            else { 
                st.push(s[i]);
                i++;
            }
        }
    }
    s = "";
    while(st.size()!=0) {
        s = s + st.top();
        st.pop();
    }
    reverse(s.begin(), s.end()); 
    cout << s << endl;
}