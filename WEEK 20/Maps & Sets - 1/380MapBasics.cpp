# include <iostream>
# include <unordered_map>
using namespace std;
int main() {
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "Garima";
    p1.second = 27;
    pair<string,int> p2;
    p2.first = "Gautam";
    p2.second = 19;
    pair<string,int> p3;
    p3.first = "GG";
    p3.second = 2;
    
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    for(auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }

}