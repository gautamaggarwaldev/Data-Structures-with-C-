# include <iostream>
using namespace std;
int main() {
    int n = 130;
    n = n | n>>1;
    n = n | n>>2;
    n = n | n>>4;
    n = n | n>>8;
    n = n | n>>16;
    cout << ((n+1) >> 1);   // or (n+1)/2
}