// using DP Lecture - 3
# include <iostream>
# include <vector>
using namespace std;
vector<vector<int>> dp;
int knapsack(int c, int wt[], int val[], int idx, int w, int n) {
    if(idx==n) return 0;
    if(dp[idx][w]!=-1) return dp[idx][w];
    if(w+wt[idx]>c) return dp[idx][w] = knapsack(c,wt,val,idx+1,w,n);
    int take = val[idx] + knapsack(c,wt,val,idx+1,w+wt[idx],n);
    int leave = knapsack(c,wt,val,idx+1,w,n);
    return dp[idx][w] = max(take,leave);
}

int main() {
    int n = 3;
    int c = 4;
    int val[] = {1,2,3};
    int wt[] = {4,5,1};
    dp.resize(n,vector<int>(c+1,-1));
    cout << knapsack(c,wt,val,0,0,n);
}