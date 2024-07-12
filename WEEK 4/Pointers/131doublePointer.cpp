# include <iostream>
using namespace std;
int main() {
    int x  = 5;
    int *ptr = &x;
    int **p = &ptr;
    int ***q = &p;

    cout << x << endl;  // 5
    cout << *ptr << endl; // 5
    cout << **p << endl;  // 5
    cout << ***q << endl;  // 5



    // cout << &x << endl;
    // cout << ptr << endl;   // 0x46ac1ff994
    // cout << p << endl;     // 0x46ac1ff988

    // cout << x << endl;   // 5
    // cout << *ptr << endl;  // 5
    // cout << p << endl;     // 0x8a3fbff888


    // cout << x << endl;   // 5
    // cout << *ptr << endl;  // 5
    // cout << **p << endl;     // 5


    // cout << &x << endl;  // x ka address = 0x3b3e9ffb84
    // cout << ptr << endl; // x ka address = 0x3b3e9ffb84
    // cout << *p << endl;  // x ka address =  0x3b3e9ffb84
}