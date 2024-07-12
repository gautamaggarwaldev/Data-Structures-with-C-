# include <iostream>
# include <map>
using namespace std;
int main() {
    map<int,int>m1;
    map<string,int>m2;
    m1[90] = 41;
    m1[10] = 56;
    m1[4] = 23;
    m1[100] = 78;
    for(auto x : m1) {
        cout << x.first << " ";
    }
    cout << endl;
    for(auto x : m1) {
        cout << x.second << " ";
    }

    m2["Garima"] = 27;
    m2["Ruby"] = 20;
    m2["Naina"] = 12;
    m2["Dilu"] = 41;
    cout << endl;
    for(auto x : m2) {
        cout << x.first << " ";
    }
    cout << endl;
    for(auto x : m2) {
        cout << x.second << " ";
    }
}