# include <iostream>
# include <vector>
using namespace std;
vector<int> st;
void BuildTree(int arr[], int i, int lo, int hi) { //TC = O(n)
    if(lo==hi) {
        st[i] = arr[lo];
        return;
    }
    int mid = lo + (hi-lo)/2;
    BuildTree(arr,2*i+1,lo,mid); //left call
    BuildTree(arr,2*i+2,mid+1,hi);//right call
    st[i] = min(st[2*i+1],st[2*i+2]);
}

int getMin(int i, int lo, int hi, int& l, int& r) { // TC = O(logn)
    if(l>hi || r<lo) return INT_MAX;
    if(lo>=l && hi<=r) return st[i];
    int mid = lo + (hi-lo)/2;
    int leftMax = getMin(2*i+1,lo,mid,l,r); 
    int rightMax = getMin(2*i+2,mid+1,hi,l,r);
    return min(leftMax,rightMax);
}

int main() {
    int arr[] = {1,4,2,8,6,4,9,3};
    int n = sizeof(arr)/4;
    st.resize(4*n);
    BuildTree(arr,0,0,n-1);
    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    while(q--) {
        int l,r;
        cout << "\n" << "Enter the range query : ";
        cin >> l >> r;
        cout << getMin(0,0,n-1,l,r); 
    }
    // TC = O(n*logn)
}