# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
int main() {
    vector<string> v;
    v.push_back("flower");
    v.push_back("flight");
    v.push_back("flow");
    // lexographically
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    sort(v.begin(), v.end());
    cout << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}