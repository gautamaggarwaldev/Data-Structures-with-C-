# include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++) {
        sum += arr[i];
    }
    cout << "SUM = " << sum;
}