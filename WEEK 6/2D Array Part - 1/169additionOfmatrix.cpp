# include <iostream>
using namespace std;
int main() {
    int a[2][3] = {{1,2,3},{7,5,3}};
    int b[2][3] = {{4,9,7},{7,6,1}};
    //a
     for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //b
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // b ke ander a ko add kr do
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
           b[i][j] += a[i][j];
        }
    }
    //sum
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // int res[2][3];
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         res[i][j] = a[i][j] + b[i][j];
    //     }
    // }
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << a[i][j] + b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}