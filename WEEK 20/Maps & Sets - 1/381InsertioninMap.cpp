# include <iostream>
# include <unordered_map>
using namespace std;
int main() {
    unordered_map<string,int> m;
    
    m["Garima"] = 27;
    m["Gautam"] = 19;
    m["GG"] = 2;

    for(auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }
    cout << m.size() << endl;
    m.erase("Gautam");
    for(auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }
    cout << m.size() << endl;

}