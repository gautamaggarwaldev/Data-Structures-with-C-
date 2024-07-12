# include <iostream>
# include <vector>
using namespace std;
int mod = 1e9+7;
int main() {
    int n = 5;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;i++) {
        dp[i] = ((dp[i-1])%mod + (dp[i-2])%mod)%mod;
    }
    cout << dp[n];
}

// int ways(int n, vector<int>& dp){
//     if(n<=2) return n;
//     if(dp[n]!=-1) return dp[n];
//     return (ways(n-1,dp)+ways(n-2,dp))%mod;
// }
// int main() {
//     int n = 4;
//     vector<int> dp(n+1,-1);
//     cout << ways(n,dp);
// }