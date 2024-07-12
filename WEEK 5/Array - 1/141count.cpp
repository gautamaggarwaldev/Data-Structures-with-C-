# include <iostream>
using namespace std;
int main() {
    int arr[6] = {8,4,16,2,37,9};
    int x = 12, count = 0;
    for(int i = 0; i <= 5; i++) {
        if(arr[i] > x) count++;
    }
    cout << count;
}