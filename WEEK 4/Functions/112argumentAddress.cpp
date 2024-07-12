# include <iostream>
using namespace std;
void fun(int x, int y) {    // x,y ---> formal parametre
    cout << "address of fun wala x : " << &x << endl;
    cout << "address of fun wala y : " << &y << endl;
}
int main() {
    int x = 3;
    int y = 7;
    cout << "address of main wala x : " << &x << endl;
    cout << "address of main wala y : " << &y << endl;
    fun(x,y);  // x,y ---> actual parametre
}