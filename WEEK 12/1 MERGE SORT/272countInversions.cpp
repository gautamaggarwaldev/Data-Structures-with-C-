# include <iostream>
# include <vector>
using namespace std;
void Countinversion(vector<int>& v) {
    int n1 = v.size();
    int count = 0;
    for(int i = 0; i < n1 - 1; i++) {
        for(int j = i+1; j < n1; j++) {
            if(v[i]>v[j] && i<j) {
                count++;
            }
        }
    }
    cout << "Total no. of inversions : ";
    cout << count;
}
int main() {
    int arr[] = {5,1,8,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr+n);
    Countinversion(v);
}