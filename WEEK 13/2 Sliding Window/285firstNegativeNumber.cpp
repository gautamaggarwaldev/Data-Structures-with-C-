# include <iostream>
using namespace std;
int main() {
    int arr[] = {2,-3,4,-4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4; // window size
    int ans[n-k+1];
    // brute force solution
    for(int i=0; i < (n-k+1); i++) { // TC = O(n)
        for(int j=i; j < (i+k); j++){  // TC = O(k)
            if(arr[j]<0) {
                ans[i] = arr[j];
                break;
            }
        }
    }
    // TC = O(n*k)
    for(int i=0; i < (n-k+1); i++) {
        cout << ans[i] << " ";
    }
}