# include <iostream>
# include <queue>
# include <stack>
using namespace std;
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
void ReverseKelement(queue<int>& q, int k) {
    int n = q.size();
    stack<int> st;
    for(int i=1;i<=k;i++) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=n-k;i++) {
        int y = q.front();
        q.push(y);
        q.pop();
    }
    
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    int k = 4;
    displayQueue(q);
    ReverseKelement(q,k);
    displayQueue(q);
}