# include <iostream>
# include <stack>
using namespace std;
int main() {
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int> st;
    // SC = O(n),  TC = O(n) 
    // pop, ans, push && forward traverse
    int pgI[n];
    pgI[0] = 1;
    st.push(0);
    for(int i=1;i<n;i++) {
        while(st.size()!=0 && arr[st.top()]<=arr[i]) {
            st.pop();
        }
        if(st.size()==0) pgI[i] = -1;
        else pgI[i] = st.top();
        pgI[i] = i-pgI[i];
        st.push(i);
    }
    for(int i=0;i<n;i++) {
        cout << pgI[i] << " ";
    }
    
}