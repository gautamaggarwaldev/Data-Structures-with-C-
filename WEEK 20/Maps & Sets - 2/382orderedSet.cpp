# include <iostream>
# include <set>
using namespace std;
int main() {
    set<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(3);
    s.insert(6);
    s.insert(4); // TC = O(log n)
    for(int ele : s) {
        cout << ele << " ";
    }
}