# include <iostream>
# include <vector>
# include <string>
# include <algorithm>
using namespace std;
string longestCommonSubsequence(string& s, string& t) {
    int m = s.length();
    int n = t.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            if(s[i-1]==t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    int i = m, j = n;
    string ans = "";
    while(i>0 && j>0) {
        if(s[i-1]==t[j-1]) { // same hai
            ans.push_back(s[i-1]);
            i--;
            j--;
        }
        else if(dp[i][j]==dp[i-1][j]) i--; // same nhi hai
        else j--;
    }
    string a = ans;
    reverse(a.begin(),a.end());
    return a;
}
int main() {
    string s = "paqbc";
    string t = "adbecf";
    cout << longestCommonSubsequence(s,t);

   
}