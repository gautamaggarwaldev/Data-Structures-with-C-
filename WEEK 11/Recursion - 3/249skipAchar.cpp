# include <iostream>
# include <string>
using namespace std;
int main() {
    string str = "Garima Govil";
    string ans = "";
    int n = str.length();
    for(int i=0; i<n; i++) {
        if(str[i] != 'a') {
            ans.push_back(str[i]);
        }
    }
    cout << ans;
}