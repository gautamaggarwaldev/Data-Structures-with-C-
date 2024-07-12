# include <iostream>
# include <unordered_set>
using namespace std;
void permutation(string &str, int i) {
    unordered_set<char> s;
    if(i==str.size()) cout << str << endl;
    for(int idx = i; idx < str.size(); idx++) {
        if(s.count(str[idx])) continue; // Step of pruning

        s.insert(str[idx]);
        swap(str[idx],str[i]);
        permutation(str,i+1);
        swap(str[i],str[idx]);
    }
}
int main() {
    string str = "aba";
    permutation(str,0);
}