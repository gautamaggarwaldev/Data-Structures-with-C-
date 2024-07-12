# include <iostream>
using namespace std;
void findUnique(int arr[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans = ans^arr[i];
    }
    int temp = ans;
    int k = 0;
    while(1) {
        if((temp & 1) == 1) break;
        temp = temp>>1;
        k++;
    }
    int retval = 0;
    for(int i=0; i<n; i++) {
        int num = arr[i];
        if(((num >> k) & 1) == 1) retval ^= num;
    }
    cout << retval << " ";
    ans = retval ^ ans;
    cout << ans;
}
int main() {
    int arr[] = {1,2,3,6,5,7,8,5,6,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,n);
}