# include <iostream>
# include <string>
using namespace std;
void permutation(string s, string t) {
    if(s.size()==0) {
        cout << t << endl;
    }
    for(int i=0;i<s.length();i++) {
        char ch = s[i];
        string left = s.substr(0,i);
        string right = s.substr(i+1);
        string str = left + right;
        permutation(str,t+ch);
    }
}
int main() {
    string s = "gar";
    permutation(s,"");
}