# include <iostream>
using namespace std;
int gcd(int a, int b) {
    for(int i = min(a,b); i >= 2; i--) {
        if(a%i == 0 && b%i == 0) return i;
    }
    return 1;
}
int main() {
    int a = 1000001;
    int b= 77;
    cout << gcd(a,b);
}