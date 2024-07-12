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
void Reorder(queue<int>& q) {
    stack<int> st;
    int n = q.size();
    //Step 1
    for(int i=1;i<=n/2;i++) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
    }
    //Step 2
    for(int i=1;i<=n/2;i++) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) {
        q.push(st.top()); //VIMP
        st.pop();
        q.push(q.front());  //VIMP
        q.pop();
    }

    //Step 3 -  Reverse the queue
    while(q.size()>0) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
    }
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    

    //Display the queue
    displayQueue(q);
    Reorder(q);
    displayQueue(q);

}