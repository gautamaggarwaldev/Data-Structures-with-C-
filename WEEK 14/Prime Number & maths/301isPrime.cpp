# include <iostream>
# include <cmath>
using namespace std;
int main() {
    int n = 1001;
    bool flag = false;
    if(n==1) flag = true;
    for(int i = 2; i < sqrt(n); i++) {  // TC = O(√n)
        if(n%i==0) {
            flag = true;
            break;
        }
    }
    if(flag) cout << "Not a prime number";
    else cout << "prime number";
}