# include <iostream>
using namespace std;

int partition(int arr[], int si, int ei) {
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i = si; i <=ei; i++) {
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIndex = count + si;
    swap(arr[(si+ei)/2], arr[pivotIndex]);
    int i = si, j = ei;
    while(i<pivotIndex && j>pivotIndex) {
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

int kthsmallest(int arr[], int si, int ei, int k) {

    int pivotIdx = partition(arr,si,ei);
    if(pivotIdx+1==k) return arr[pivotIdx];
    else if(pivotIdx+1 < k) return kthsmallest(arr,pivotIdx+1,ei,k);
    else return kthsmallest(arr,si,pivotIdx-1,k); 

}
int main() {
    int arr[] = {6,4,3,2,9,7,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k = 5;
    cout << kthsmallest(arr,0,n-1,k); //call
}