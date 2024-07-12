# include <iostream>
# include <vector>
using namespace std;
void printVector(vector<int> &v, int idx) {
    if(idx == v.size()) return;
    cout << v[idx] << " ";
    printVector(v,idx+1);
}
int main() {
    int n = 6;
    vector<int> v(n);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);
    v.push_back(5);
    printVector(v,n);
}