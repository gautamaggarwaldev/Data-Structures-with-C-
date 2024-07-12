# include <iostream>
using namespace std;
int storeMax(int arr[], int n, int idx) {
    if(idx==n) return INT_MIN;
    return max(arr[idx], storeMax(arr,n,idx+1));
}
int main() {
    int arr[] = {1,6,9,796,4,5,3,0,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << storeMax(arr,n,0);
}   