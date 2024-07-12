# include <iostream>
# include <queue>
using namespace std;
int main() {
    int arr[] = {5,9,8,4,6,3,1,7,2,0};
    int n = sizeof(arr)/4;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int ele : arr) {
        pq.push(ele);
    }
    int i=0;
    while(pq.size()>0 && i<n) {
        arr[i] = pq.top();
        pq.pop();
        i++;
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}