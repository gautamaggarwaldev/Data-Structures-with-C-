# include <iostream>
using namespace std;
int main() {
    int arr[6] = {5,4,-6,3,-2,1};
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    // bubble sort
    for(int i = 0; i < 5; i++) {  // n-1 = 6-1 = 5 passes
        //traverse
        for(int j = 0; j < 5-i; j++) {
            if(arr[j] > arr[j+1]) { // swap
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << endl;
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
}