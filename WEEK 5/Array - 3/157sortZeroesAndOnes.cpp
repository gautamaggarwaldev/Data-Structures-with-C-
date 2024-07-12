# include <iostream>
using namespace std;
void sort01(int arr[], int size) {
    int noz = 0;
    int noo = 0;
     for(int i = 0; i < size; i++) {
        if(arr[i] == 0) noz++;
        else noo++;
    }
    for(int i = 0; i < size; i++) {
        if(i<noz) arr[i] = 0;
        else arr[i] = 1;
    }
    cout << endl;
}
int main() {
    int arr[8] = {0,1,0,0,1,1,0,1};
    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    sort01(arr,8);// calling
    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
}