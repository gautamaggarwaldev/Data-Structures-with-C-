# include <iostream>
using namespace std;
int max(int a, int b, int c) {
    if(a>b && a>c) {
        return a;
    }
    else if(b>a && b>c) {
        return b;
    }
    else return c; 
}
int main() {
    int a = 5,b = 9,c = 76;
    cout << max(a,b,c);
}