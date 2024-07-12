# include <iostream>
using namespace std;
int main() {
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k= 8;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    int prevSum = 0;
    for(int i=0;i<k;i++){  // tno k
        prevSum += arr[i];
    }
    // SLIDIND WINDOW ALGORITHM
    int i = 1;
    int j = k;
    while(j<n) {  // tno (n-k)
        prevSum += arr[j] - arr[i-1];
        if(maxSum < prevSum) {
            maxSum = prevSum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    // TC = O(n)
    cout << maxSum << endl;
    cout << maxIdx << endl;
}