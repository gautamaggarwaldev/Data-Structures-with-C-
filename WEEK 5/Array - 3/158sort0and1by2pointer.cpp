# include <iostream>
using namespace std;
void sort01(int arr[], int size){
    int i = 0;
    int j = size - 1;
    while(i<j) {
        if(arr[i] == 0) i++;
        if(arr[j] == 1) j--;
        // if(i>j) break;
        else if(arr[i] == 1 && arr[j] == 0) {
            arr[i] = 0;
            arr[j] = 1;
            i++;
            j--;
        }
    }
    cout << endl;
}
int main() {
    int arr[] = {1,1,0,0,1,1,0,0};
    int n = sizeof(arr) / sizeof(arr[2]);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    sort01(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}