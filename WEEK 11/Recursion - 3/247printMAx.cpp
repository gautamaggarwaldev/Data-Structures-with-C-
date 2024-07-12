# include <iostream>
using namespace std;
void printMax(int arr[], int n, int idx, int max) {
    if(idx==n) { // base case
        cout << max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int main() {
    int arr[] = {1,6,9,7,4,500,3,0,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);
}