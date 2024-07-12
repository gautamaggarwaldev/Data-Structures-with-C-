# include <iostream>
# include <vector>
using namespace std;
void subset(vector<int>v, int arr[], int n, int idx) {
    if(idx == n) {
        for(int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
        cout << endl;
        return;
    }
    subset(v,arr,n,idx+1);
    if(v.size()==0 || arr[idx-1] == v[v.size()-1]) {
        v.push_back(arr[idx]);
        subset(v,arr,n,idx+1);
    }
}
int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;

    subset(v,arr,n,0);
}