# include <iostream>
# include <queue>
using namespace std;
int main() {
    priority_queue<int,vector<int>,greater<int>> pq; // MinHeap
    pq.push(5);
    pq.push(50);
    pq.push(4);
    pq.push(0);
    pq.push(-8);
    cout << pq.top() << endl; //-8
    pq.pop();
    cout << pq.top() << endl; //0
}