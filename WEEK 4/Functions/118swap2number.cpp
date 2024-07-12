# include <iostream>
using namespace std;
void swap(int a, int b) {
    int temp;
    temp = a;  // temp =9
    a = b;    //a=8
    b = temp;  // b=9
    return;
}
int main() {
    int a,b;
    cin >> a >> b;  // a=9, b=8
    swap(a,b);
    cout << a << "," << b;
}