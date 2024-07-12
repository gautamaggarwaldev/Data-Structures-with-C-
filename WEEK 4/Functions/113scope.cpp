# include <iostream>
using namespace std;
int a = 9; // global variable
void func() {
    cout << a;
}
int main() {
    int x = 5;  // local variable
    cout << x << endl;
    a = 10;
    // int a = 3;
    // cout << a << endl;
    // cout << a + 10 << endl;
    func();
}