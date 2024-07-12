# include <iostream>
# include <queue>
using namespace std;
int main() {
    priority_queue<int> pq; // by default maxHeap
    pq.push(10);
    pq.push(20);
    pq.push(-6);
    pq.push(83);
    cout << pq.top() << endl; // 83
    pq.pop();
    cout << pq.top() << endl; // 20
}   