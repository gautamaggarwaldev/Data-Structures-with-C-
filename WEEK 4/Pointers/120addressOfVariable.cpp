# include <iostream>
using namespace std;
int main() {
    float x = 6.3;
    int y = 6, s = 9;
    char z = 'u';
    cout << &x << endl;  //0xe3b17ffddc    0x394a3ff73c    0xd10cbff7dc
    cout << &y << endl; 
    cout << &s << endl; 
    cout << &z << endl;  
}