#include<iostream>
using namespace std;
int main(){
    float p, r, t, si;
    cout << "Enter the principle amount : ";
    cin >> p;
    cout << "Enter the rate : ";
    cin >> r;
    cout << "Enter the duration : ";
    cin >> t;
    
    si = (p * r * t) / 100;
    cout << "Simple Interest = " << si;


}