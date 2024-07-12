# include <iostream>
using namespace std;
int main() {
    int a = 1, b = 1, sum = 0;
    int n;
    cout << "Enter the nth term : ";
    cin >> n;
    for(int i = 1; i <= (n-2); i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << b;
}