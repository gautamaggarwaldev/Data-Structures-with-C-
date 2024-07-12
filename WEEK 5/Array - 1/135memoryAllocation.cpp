# include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << &arr << endl;    //0xa6361ffa40
    cout << &arr[0] << endl; //0xa6361ffa40
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    // 0x55677ffd40
    // 0x55677ffd44
    // 0x55677ffd48
    // 0x55677ffd4c
    // 0x55677ffd50

    int arr1[3] = {2,5,7};
    cout << arr1;   //0x988ebff834
}