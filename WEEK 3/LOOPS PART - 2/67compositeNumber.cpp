#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i = 2; i <= (n-1); i++) {
        if(n % i == 0) {
            cout << n << " is a Composite Number" << endl;
            break;
        }
    }
    
}