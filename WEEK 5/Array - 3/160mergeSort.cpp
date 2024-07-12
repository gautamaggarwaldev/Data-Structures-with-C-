# include <iostream>
using namespace std;
int main() {
    int arr1[] = {1,4,5,8};
    int arr2[] = {2,3,6,7,10};
    int i = 0;
    int j = 0;
    int k = 0;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[m+n];
    
    while(i<=n && j<=m){
            if(arr1[i] < arr2[j]) {
                arr3[k] = arr1[i];
                i++;
                k++;
            }
            else {
                arr3[k] = arr2[j];
                j++;
                k++;
            }
    }
    if(i==n){
        while(j<=m-1) {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1) {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }
    int x = sizeof(arr3) / sizeof(arr3[0]);
    for(int l = 0; l < x; l++) {
        cout << arr3[l] << " ";
    }
}