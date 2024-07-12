# include <iostream>
using namespace std;
int main() {
    int arr[] = {4,2,6,1,7};
    int* ptr = arr;  // giving address
    // int *ptr = &arr[0];  // giving address
    cout << ptr << endl;
    // ptr[0] = 8;
    // for(int i = 0; i <= 4; i++) {
    //     cout << ptr[i] << " ";
    // }
    for(int i = 0; i <= 4; i++) {
        cout << *ptr << " ";
        // cout << i[ptr] << " ";
        // cout << i[arr] << " ";
        ptr++;
    }
    ptr = arr;  //ptr is pointing to ist element
    cout << endl;

    *ptr = 8;    // ptr[0] = 8
    ptr++; // ptr is pointing to 2nd element
    *ptr = 9;
    ptr--; //ptr is pointing to 1st element
    for(int i = 0; i <= 4; i++) {
        cout << ptr[i] << " ";
    }
}