# include <iostream>
using namespace std;
int fact(int x) {
    if(x==1 || x==0) return 1;  // base case
    return x * fact(x-1); // recursive call
}
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "factorial = " << fact(n);
}