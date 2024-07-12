# include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,3,2,4,5,1,7};
    int ans;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        ans = arr[i]^ans;
    }
    cout << ans;
    
}