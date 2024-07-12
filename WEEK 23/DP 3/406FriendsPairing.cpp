# include <iostream>
# include <vector>
using namespace std;
int main() {
    int n = 1000;
    vector<int> dp(n+1,-1);
    long long MOD = 1000000007;
    dp[0] = dp[1] = 1;
    for(int i=2;i<=n;i++) {
        dp[i] = ((dp[i-1])%MOD + ((i-1))%MOD * (dp[i-2])%MOD)%MOD;
    }

    cout << dp[n];
}