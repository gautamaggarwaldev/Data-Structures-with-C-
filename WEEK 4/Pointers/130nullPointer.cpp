# include <iostream>
using namespace std;
int main() {
    int* ptr1 = NULL;  // reserved address
    int* ptr2 = 0;  // reserved address
    int* ptr3 = '\0';  // reserved address
    cout << ptr1 << endl; // 0
    cout << ptr2 << endl; // 0
    cout << ptr3 << endl; // 0
    // cout << &ptr1;  //0x52c89ffd98

    // \0 ---> null character
    // \0 ---> ascii value ---> 0
    // cout << endl << (int)'\0';
}