# include <iostream>
using namespace std;
int main() {
    // int x = 7;
    // int *ptr = &x;
    // cout << ptr << endl;  //0xfb7b1ff8d4
    // ptr = ptr + 1;
    // cout << ptr << endl;  //0xfb7b1ff8d8

//     int x = 4;
//     int *ptr = &x;
//     cout << *ptr << endl;  //4
//     ptr = ptr + 1;
//     cout << *ptr << endl;  //1688206056

    // bool flag = true;
    // bool *ptr = &flag;
    // cout << ptr << endl;  //0x7d979ff6b7
    // ptr++;
    // cout << ptr;         //0x7d979ff6b8

     int x = 4;
    int *ptr = &x;
    cout << *ptr << endl;  //4
    // *ptr = *ptr + 1;      //x = x+1
    // *ptr++;   //give garbage value = -545261656
    (*ptr)++;  //give correct value = 5   x = x+1
    (*ptr)--; // 4
    cout << *ptr << endl;  //4
}