# include <iostream>
using namespace std;
int power(int a, int b) {
    if(b==0) return 1; // base case
    return a * power(a,b-1); // call
}
int main() {
    int a, b;
    cout << "Enter base & exponent : ";
    cin >> a >> b;
    cout << power(a,b);
}