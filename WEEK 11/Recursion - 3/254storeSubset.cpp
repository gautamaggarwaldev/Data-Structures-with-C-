# include <iostream>
# include <vector>
using namespace std;
void subset(string ans, string original, int idx,vector<string>& v) {
    if(idx == original.length()) {
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    subset(ans,original,idx+1,v);
    subset(ans+ch,original,idx+1,v);
}
int main() {
    string str = "abcd";
    vector<string> v;
    subset("",str,0,v);
    for(string ele : v) {
        cout << ele << endl;
    } 
}