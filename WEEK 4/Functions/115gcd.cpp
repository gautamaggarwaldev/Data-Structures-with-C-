# include <iostream>
using namespace std;
int gcd(int a, int b) {
    int hcf = 1;
    for(int i = min(a,b); i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {  // i is common factor
            hcf = i;
            break;
        } 
    }
    return hcf;
}
int main() {
    int a,b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << gcd(a,b);
}