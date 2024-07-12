# include <iostream>
using namespace std;
void change(int arr[], int n) {
    int i = 0;
    int j = n-1;
    while(i<j) {
        if(arr[i]<0) i++;
        if(arr[j]>0) j--;
        if(i>j) break;
        if(arr[i]>0 && arr[j]<0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    cout << endl;
}
int main() {
    int arr[] = {1,-8,6,9,-7,-2,-5,-1,4,6,-2,3,-7};
    int n = sizeof(arr) / sizeof(arr[3]);
    cout << "Original Array : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    change(arr, n);
    cout << "Changed Array : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}