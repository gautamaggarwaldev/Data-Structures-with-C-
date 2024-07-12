# include <iostream>
using namespace std;
int main() {
    int arr[5] = {12,4,100,15,633};
    int max = arr[0];  // max = INT_MIN
    for(int i = 0; i <= 4; i++) {
        if(max < arr[i]) max = arr[i];
    }
    cout << max;
}