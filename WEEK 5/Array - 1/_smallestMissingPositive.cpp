# include <iostream>
using namespace std;
int main() {
    int arr[] = {-7,-5,-3,0,1,2,4,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool flag = false;
    int x = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= 0) continue;

        if(arr[i] != x) {
            flag = true;
            cout << x;
            break;
        }
        x++;
    }
    if(flag == false){
        cout << "There was no missing element";
    }
}