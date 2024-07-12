# include <iostream>
using namespace std;
int binary2decimal(string &str) {
    int n = str.length();
    int ans = 0;
    for(int i=n-1; i>=0; i--) {
        char ch = str[i];
        int num = ch - '0';
        ans = ans + num*(1 << (n-i-1));
    }
    return ans;
}
int main() {
    string str;
    cout << "Enter binary string : ";
    cin >> str;
    cout << binary2decimal(str);
}