# include <iostream>
using namespace std;
int main() {
    int arr[] = {12,3,1,6,1,6,6,6,6,4,3,3,8,13,13,13,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxele = INT_MIN;
    int ans = 0;
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > maxele) {
            maxele = arr[i];
            count = 1;
        }
        else if(arr[i] == maxele) {
            count++;
        }
        ans = max(ans,count);
    }
    cout << ans;
}