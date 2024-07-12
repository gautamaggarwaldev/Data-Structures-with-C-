# include <iostream>
using namespace std;
void Sum(int sum, int n) {
    if(n==0) {  // base case
        cout << sum; // kaam
        return;
    }
    Sum(sum+n, n-1); //call
}
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    Sum(0,n);
}