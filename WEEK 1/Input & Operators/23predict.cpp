#include <iostream>
using namespace std;
int main(){
    int num1;
    int p = 5, q = 10;
    p += q -= p;       // right to left   q = q-p  and then  p = p+q
    cout << p << " " << q << endl;

}