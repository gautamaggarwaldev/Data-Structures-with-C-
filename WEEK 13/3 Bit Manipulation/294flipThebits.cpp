# include <iostream>
using namespace std;
int main() {
    int n = 23; // 10111
    int temp = n;
    n = n | n>>1;
    n = n | n>>2;
    n = n | n>>4;
    n = n | n>>8;
    n = n | n>>16;
    int z = (n+1) >> 1;
    
    cout << (temp ^ z);  // 01000 = 8
}