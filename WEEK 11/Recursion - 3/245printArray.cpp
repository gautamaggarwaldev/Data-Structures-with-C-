# include <iostream>
using namespace std;
void printArray(int arr[], int idx, int size) {
    if(idx == size) return;
    cout << arr[idx] << " ";
    printArray(arr,idx+1,size);
}
int main() {
    int arr[] = {1,5,6,9,7,2,2,3,6,4,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,0,n);
}