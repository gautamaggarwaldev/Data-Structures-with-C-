# include <iostream>
# include <vector>
using namespace std;
void subset(int arr[], int n, int idx, vector<int> ans) {
    if(idx==n) {
        for(int ele : ans) {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }
    subset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    subset(arr,n,idx+1,ans);
}
int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subset(arr,n,0,v);
}