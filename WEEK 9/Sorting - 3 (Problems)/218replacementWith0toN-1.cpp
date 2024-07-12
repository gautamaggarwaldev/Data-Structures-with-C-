# include <iostream>
using namespace std;
int main() {
    // only for positive numbers
    int arr[] = {19,12,23,8,16};
    int n = 5;
    int x = 0;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    for(int i = 0; i < n; i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0; j < n; j++) {
            if(arr[j] <= 0) continue;
            else {
                if(min > arr[j]) {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -x;
        x++;
    }
    for(int i = 0; i < n; i++) {
        arr[i] *= -1;
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}