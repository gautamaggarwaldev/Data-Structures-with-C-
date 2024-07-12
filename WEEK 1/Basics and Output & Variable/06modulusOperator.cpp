#include<iostream>
using namespace std;
int main(){
    cout << 47 % 7 << endl;  //a>b gives actual remainder
    cout << 8 % 8 << endl;  // gives zero
    cout << 5 % 97 << endl;    //when a<b remainder = a
    cout << 8 % (-5) << endl; //a%(-b) = a%b
    cout << -99 % 2 << endl;  //(-a)%b = -(a%b)
    cout << (-89) % (-17) << endl;  //(-a)%(-b)  =  (-a)%b  =  -(a%b)

    // it gives error in modulus both a and b in a%b are in integer form 
    // throws error

    // float m = 5, n = 4;
    // int c;
    // c = m % n;
    // cout << c;
}