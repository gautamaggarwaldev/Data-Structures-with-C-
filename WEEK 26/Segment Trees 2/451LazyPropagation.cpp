# include <iostream>
# include <vector>
using namespace std;
vector<int> st;
vector<int> lazy;
void buildTree(int nums[], int i, int lo, int hi) {
        if(lo == hi) {
            st[i] = nums[lo];
            return;
        }
        int mid = lo + (hi-lo)/2;
        buildTree(nums,2*i+1,lo,mid);
        buildTree(nums,2*i+2,mid+1,hi);
        st[i] = st[2*i+1] + st[2*i+2];
    }
int getSum(int i, int lo, int hi, int& l, int& r) {
    //check for pending lazy updates
    if(lazy[i]!=0) {
        int rangeSize = hi-lo+1;
        st[i] += rangeSize * lazy[i];
        if(lo!=hi) {
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(l>hi || r<lo) return 0;
    if(lo>=l && hi<=r) return st[i];
    int mid = lo + (hi-lo)/2;
    int leftSum = getSum(2*i+1,lo,mid,l,r); 
    int rightSum = getSum(2*i+2,mid+1,hi,l,r);
    return leftSum + rightSum;
}

void updateRange(int i, int lo, int hi, int l, int r, int value) {
    //check for pending lazy updates
    if(lazy[i]!=0) {
        int rangeSize = hi-lo+1;
        st[i] += rangeSize * lazy[i];
        if(lo!=hi) {
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(l>hi || r<lo) return;
    if(lo>=l && hi<=r) { //update entire lo to hi   
        int rangeSize = hi-lo+1;
        st[i] += rangeSize*value;
        if(lo!=hi) {
            lazy[2*i+1] += value;
            lazy[2*i+2] += value;
        }
        return;
    }
    int mid = lo + (hi-lo)/2;
    updateRange(2*i+1,lo,mid,l,r,value);
    updateRange(2*i+2,mid+1,hi,l,r,value);
    st[i] = st[2*i+1] + st[2*i+2];

}

int main() {
    int nums[] = {1,4,2,8,6,4,9,3};
    int n = sizeof(nums)/4;
    st.resize(4*n);
    lazy.resize(4*n,0);
    buildTree(nums,0,0,n-1);
    int l,r,value;
    cin >> l >> r;
    cout << getSum(0,0,n-1,l,r) << "\n";
    updateRange(0,0,n-1,2,5,10);
    cout << getSum(0,0,n-1,l,r) << "\n";
}