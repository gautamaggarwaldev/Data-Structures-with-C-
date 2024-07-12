# include <iostream>
using namespace std;
// void greet(){
//     cout << "Namste" << endl;
//     cout << "kya haal" << endl;
// }
// int product(int a, int b){
//     return a*b;
// }
void gun() {
    return; //means function ends
    cout << "hello gautam";
}
void fun() {
    cout << "hello garima" << endl;
    gun();
    return;
}
int main() {
    fun();
    // // cout << product(2,5) << endl;
    // greet();
    // // greet();
    // // greet();
    // // greet();
    // int a = 5;
    // int b = 9;
    // cout << a << " " << b << endl;
    // swap(a,b);
    // cout << a << " " << b << endl;
}