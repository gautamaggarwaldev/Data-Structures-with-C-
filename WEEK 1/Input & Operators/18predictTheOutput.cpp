#include <iostream>
using namespace std;
int main()
{
    //bool p = false, q = false, r = true;    -----> OUTPUT = 1
    int p = 1, q = 2, r = 2;             
    cout << (p == q == r) << endl;         //  -----> OUTPUT = 0       LEFT TO RIGHT
    cout << (p == (q == r)) << endl;         //  -----> OUTPUT = 1     RIGHT TO LEFT


}