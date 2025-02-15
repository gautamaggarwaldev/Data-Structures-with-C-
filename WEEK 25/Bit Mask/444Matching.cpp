# include <iostream>
# include <cstring>
# include <vector>
# define mod 1000000007
using namespace std;

int dp[22][1<<22];
void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

}
int f(vector<vector<int>>& c, int i, int n, int mask) {
    if(i==n+1) {
        if(mask==0) return 1;
        return 0;
    }
    if(dp[i][mask]!=-1) return dp[i][mask];
    int ans = 0;
    for(int w=1; w<=n; w++) {
        bool available = (((1 << (w-1)) & mask) == 0) ? 0 : 1;
        if(available && c[i][w]) {
            ans = ((ans%mod) + (f(c,i+1,n,mask ^ (1<<(w-1))))%mod)%mod;
        }
    }
    return dp[i][mask] = ans;
}

int main() {
    file_i_o();
    int n;
    cin >> n;
    vector<vector<int>>c(n+1,vector<int>(n+1));
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin >> c[i][j];
        }
    }
    memset(dp,-1,sizeof dp);
    cout << f(c,1,n,(1<<n)-1);
}