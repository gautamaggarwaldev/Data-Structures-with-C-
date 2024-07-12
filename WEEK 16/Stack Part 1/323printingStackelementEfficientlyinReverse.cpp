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
    //store the value in another stack temp.
    while(st.size()>0) {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    cout << endl;

    //putting element back into st from temp;
    while(temp.size()>0) {
        st.push(temp.top());
        temp.pop();
    }
    cout << st.size() << endl;
    cout << temp.size() << endl;

}