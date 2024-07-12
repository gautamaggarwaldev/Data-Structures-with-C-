# include <iostream>
# include <deque>
using namespace std;
void display(deque<int>& dq) {
    for (const int& num : dq) {
    cout << num << " ";
  }
}
int main() {
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(10);
    dq.push_front(60);
    dq.push_front(40);
    dq.push_front(30);
    dq.push_back(9690);
    dq.push_back(2066);
    dq.push_back(45);
    display(dq);
}