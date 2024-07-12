# include <iostream>
using namespace std;
int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
        cout << "Factorial of " << i << " = " << f << endl;
    }
    return f;
}
int main() {
    int n;
    cout << "Enter the n : ";
    cin >> n;
    fact(n);
}