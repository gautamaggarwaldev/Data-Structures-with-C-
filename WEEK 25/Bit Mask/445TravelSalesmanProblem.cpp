# include <iostream>
# include <cstring>
using namespace std;

int tsp(int grid[4][4], int dp[10][1<<10], int curr, int mask, int  n) {// TC = O(n^2 * 2^n)
    if(mask==(1<<n)-1) {
        return grid[curr][0];
    }

    if(dp[curr][mask]!=-1) return dp[curr][mask];

    int ans = INT_MAX;
    for(int nei = 0; nei<n; nei++) {
        if((mask & (1<<nei))==0) {
            ans = min(ans,grid[curr][nei] + tsp(grid,dp,nei,mask | (1<<nei),n));
        }
    }
    return dp[curr][mask] = ans;
}

int main() {
    int grid[4][4]  = {{0,20,42,25},{20,0,30,34},{42,30,0,10},{25,34,10,0}};
    int dp[10][1<<10];
    memset(dp,-1,sizeof(dp));
    cout << tsp(grid,dp,0,1,4);
}