# include <iostream>
using namespace std;
void removeChar(string original, string ans) {
    if(original.length() == 0) {
        cout << ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') removeChar(original.substr(1),ans);
    else removeChar(original.substr(1),ans+ch);
}
int main() {
    string str = "garima govil";
    removeChar(str,"");
}