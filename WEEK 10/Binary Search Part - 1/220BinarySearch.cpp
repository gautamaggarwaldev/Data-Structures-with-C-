# include <iostream>
# include <algorithm>
using namespace std;
int main() {
    int arr[] = {4,3,6,9,2,7,1,-6,5,-33,-100,7,0};
    int n = 13;
    // sorting
    for(int i = 0; i < n-1; i++) {
        bool flag = true;
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // BINARY SEARCH
    int lo = 0;
    int hi = n-1;
    int target;
    int x = -1;
    cout << "Enter target : ";
    cin >> target;
    bool flag = false; //not found
    while(lo<=hi) {
        int mid = lo + (hi-lo) / 2;
        x = mid;
        if(arr[mid] == target) {
            flag = true;
            break;
        }
        else if(arr[mid] < target) lo = mid+1;
        else hi = mid-1;
    }
    if(flag == false) cout << "element not found!!";
    else cout << "element : " << arr[x] << " & " << "index : " << x;     
}