# include <iostream>
# include <stack>
using namespace std;
void RevdisplayRecursion(stack<int>& st) {
    if(st.size()==0) return; // base case
    int x = st.top();
    cout << x << " "; //kaam
    st.pop();
    RevdisplayRecursion(st); // recursion call
    st.push(x);
}
void displayRecursion(stack<int>& st) {
    if(st.size()==0) return; // base case
    int x = st.top();
    st.pop();
    displayRecursion(st); // recursion call 
    cout << x << " "; //kaam
    st.push(x);
}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    RevdisplayRecursion(st);
    cout << endl;
    displayRecursion(st);
}