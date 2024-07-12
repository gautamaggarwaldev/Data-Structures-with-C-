# include <iostream>
# include <vector>
using namespace std;
void subset(int arr[], int n, int idx, vector<int>& ans) {
    if(idx==n) {
        for(int ele : ans) {
            cout << ele << " ";
        }
        return;
    }
    int a = arr[idx];
    if(a==1)  subset(arr,n,idx+1,ans);
    else {
        ans.push_back(arr[idx]);
        subset(arr,n,idx+1,ans); 
    }    
}
int main() {
    int arr[] = {1,2,1,1,1,3,5,61,1,1,10,0,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subset(arr,n,0,v);
}