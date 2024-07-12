# include <iostream>
# include <vector>
using namespace std;
void subset(int arr[], int n, int idx, vector<int> ans, int k) {
    if(idx==n) {
        if(ans.size()==k) {
            for(int ele : ans) {
                cout << ele << " ";
            }
            cout << endl;
        }
        return;
    }
    if(ans.size()+(n-idx) < k) return;
    subset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    subset(arr,n,idx+1,ans,k);
}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    int k = 3;
    subset(arr,n,0,v,k);
}