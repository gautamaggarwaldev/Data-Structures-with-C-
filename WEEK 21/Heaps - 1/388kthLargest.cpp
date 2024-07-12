# include <iostream>
# include <queue>
using namespace std;
int main() {
    priority_queue<int,vector<int>,greater<int>> pq; //minHeap
    int arr[] = {10,20,-4,8,6,18,2,105,118};
    int k = 5;
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++) {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout << pq.top() << endl;
}