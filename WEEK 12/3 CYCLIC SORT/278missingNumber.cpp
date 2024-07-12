# include <iostream>
using namespace std;
int main() {
    int arr[] = {8,6,9,2,3,5,7,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum1 = 0;
    int sum2 = (n*(n+1))/2;
    
    for(int i = 0; i < n; i++)  sum1 += arr[i];
    int missingNum = sum2 - sum1;
    cout << missingNum;

}