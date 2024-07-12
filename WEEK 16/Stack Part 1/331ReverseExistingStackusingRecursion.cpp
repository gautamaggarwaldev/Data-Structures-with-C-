# include <iostream>
# include <stack>
using namespace std;
void displayRecursion(stack<int>& st) {
    if(st.size()==0) return; // base case
    int x = st.top();
    cout << x << " "; //kaam
    st.pop();
    displayRecursion(st); // recursion call
    st.push(x);
}

void pushAtBottom(stack<int>& st, int val) {
    if(st.size()==0) { // base case
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val); // recursion call
    st.push(x);
}

void ReverseStackRec(stack<int>& st) {
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    ReverseStackRec(st);
    pushAtBottom(st,x);
}
int main() {
    stack<int> st;
    // st.pop();
    // cout << st.top(); ---> gives error because stack is empty
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRecursion(st);
    ReverseStackRec(st);
    cout << endl;
    displayRecursion(st);
    
}