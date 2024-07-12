# include <iostream>
using namespace std;
void subset(string ans, string original, int idx) {
    if(idx == original.length()) {
        cout << ans << endl;
        return;
    }
    char ch = original[idx];
    subset(ans,original,idx+1);
    subset(ans+ch,original,idx+1);
}
int main() {
    string str = "abcd";
    subset("",str,0);
}