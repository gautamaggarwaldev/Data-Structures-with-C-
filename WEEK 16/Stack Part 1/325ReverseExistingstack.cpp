# include <iostream>
# include <stack>
using namespace std;
int main() {
    stack<int> st;
    stack<int> temp1;
    stack<int> temp2;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //empty st into temp1
    while(st.size()>0) {
        cout << st.top() << " ";
        temp1.push(st.top());
        st.pop();
    }
    cout << endl;
    //empty temp1 into temp2
    while(temp1.size()>0) {
        temp2.push(temp1.top());
        temp1.pop();
    }
    //empty temp2 into st
    while(temp2.size()>0) {
        st.push(temp2.top());
        temp2.pop();
    }
    cout << st.size() << endl;
    while(st.size()>0) {
        cout << st.top() << " ";
        temp1.push(st.top());
        st.pop();
    }
    cout << endl << st.size() << endl;
}