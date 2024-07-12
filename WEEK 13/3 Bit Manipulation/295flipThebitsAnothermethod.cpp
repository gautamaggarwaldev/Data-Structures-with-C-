# include <iostream>
using namespace std;
int main() {
    int n = 52;
    int b = n;
    int temp;
    while(n!=0) {
        temp = n;
        n = n & (n-1);
    }
    int a  = (temp<<1) - 1;
    cout << (b ^ a);
}