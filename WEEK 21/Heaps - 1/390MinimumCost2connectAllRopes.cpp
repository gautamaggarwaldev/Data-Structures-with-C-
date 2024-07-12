# include <iostream>
# include <queue>
using namespace std;
int main() {
    priority_queue<int,vector<int>,greater<int>> pq;
    int arr[] = {2,7,4,1,8,10,9};
    int n = sizeof(arr)/4;
    for(int ele : arr) {
        pq.push(ele);
    }
    int cost = 0;
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a+b);
        int x = a+b;
        cost += x;
    }
    cout << cost;
}