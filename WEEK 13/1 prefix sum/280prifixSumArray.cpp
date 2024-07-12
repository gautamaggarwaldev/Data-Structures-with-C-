# include <iostream>
using namespace std;
int main() {
    int arr[] = {2,6,4,8,9,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int run[n];

    run[0] = arr[0];
    for(int i=1;i<n;i++) {
        run[i] = arr[i] + run[i-1];
    }
    for(int i=0;i<n;i++) {
        cout << run[i] << " ";
    }
}