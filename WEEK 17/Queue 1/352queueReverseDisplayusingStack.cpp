# include <iostream>
# include <queue>
# include <stack>
using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> st;
    while(q.size()!=0) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0) {
        q.push(st.top());
        st.pop();
    }
}

void displayQueue(queue<int>& q) {
    int n = q.size();
    for(int i=0;i<n;i++) {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    displayQueue(q);
    reverseQueue(q);
    displayQueue(q);
    
}