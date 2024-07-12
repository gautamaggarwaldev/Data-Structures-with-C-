# include <iostream>
using namespace std;
int main() {
    int x = 4;
    int y = 9;
    int *ptr = &x;
    int* ptr2 = &y;
    cout << ptr << endl;
    cout << ptr2 << endl;
}