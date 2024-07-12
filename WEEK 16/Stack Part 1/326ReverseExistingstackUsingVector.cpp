# include <iostream>
# include <stack>
# include <vector>
using namespace std;
int main() {
    stack<int> st;
    vector<int> v;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(st.size()>0) {
        cout << st.top() << " ";
        v.push_back(st.top());
        st.pop();
    }
    cout << endl;
    for(int i=0;i<v.size();i++) {
        st.push(v[i]);
    }
    while(st.size()>0) {
        cout << st.top() << " ";
        v.push_back(st.top());
        st.pop();
    }
}