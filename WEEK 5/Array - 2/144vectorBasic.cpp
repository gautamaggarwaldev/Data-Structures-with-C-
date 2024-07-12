# include <iostream>
# include <vector>
using namespace std;
int main() {
    vector<int> v;  //you need not mention the size
    // inserting / input do not use []
    v.push_back(6);
    cout << v.capacity() << endl;
    v.push_back(1);
    cout << v.capacity() << endl;
    // v[1] = 1;   // gives a garbage value at the end of vector
    v.push_back(9);
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;


   // if you want to update / access
    // v[0] = 88;
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
}