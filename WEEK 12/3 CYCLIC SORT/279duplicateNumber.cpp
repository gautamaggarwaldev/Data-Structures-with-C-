# include <iostream>
using namespace std;
int main() {
    int arr[] = {1,3,6,5,4,8,7,8,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    // cyclic sort
    int i = 0;
    while(i<n) {
        int correctidx = arr[i] ;
        if(arr[i]==arr[correctidx]) { 
            i++;
        }
        else swap(arr[i],arr[correctidx]);
    }
    cout << arr[0];
}


    // int sum = (n*(n-1))/2;
    // int s = 0;
    // for(int i =0; i < n; i++) {
    //     s += arr[i];
    // }
    // cout << s - sum;