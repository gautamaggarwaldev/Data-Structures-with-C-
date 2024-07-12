# include <iostream>
# include <stack>
using namespace std;
int main() {
   stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //Reverse order
    while(st.size()>0) {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    cout << endl;
    //Same order
    while(temp.size()>0) {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}