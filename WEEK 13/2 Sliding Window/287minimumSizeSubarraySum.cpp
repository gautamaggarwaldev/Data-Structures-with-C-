#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int minLen = 0, sum = 0, j = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        while (sum - arr[j] >= target && j <= i) {
            sum -= arr[j];
            j++;
        }
        if (sum >= target) {
            if (minLen == 0 || minLen > (i-j+1)) {
                minLen = i-j+1;
            }
        }
    }
    cout << minLen;
}