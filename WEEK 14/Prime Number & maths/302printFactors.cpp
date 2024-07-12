# include <iostream>
# include <cmath>
using namespace std;
void printFactor(int n) {
    for(int i=1; i<sqrt(n); i++) { // TC = O(√n)
        if(n%i==0) cout << i << " " << n/i << " ";
    }
}
int main() {
    printFactor(60);
    cout << endl;
    int n = 60;
    for(int i=1;i<=n;i++) { // TC = O(n)
        if(n%i==0) cout << i << " ";
    }
}