# include <iostream>
# include <vector>
using namespace std;
int ans;
bool canWego(vector<vector<int>>& grid, int n, int i, int j) {
    return i>=0 && j>=0 && i<n && j<n && grid[i][j]==0;
}
void fn(vector<vector<int>>& grid, int n, int i, int j) {
    if(i==n-1 && j==n-1) {
        ans += 1;
        return;
    }
    grid[i][j] = 2; //mark visited
    //up
    if(canWego(grid,n,i-1,j)) fn(grid,n,i-1,j);
    //down
    if(canWego(grid,n,i+1,j)) fn(grid,n,i+1,j);
    //right
    if(canWego(grid,n,i,j+1)) fn(grid,n,i,j+1);
    //left
    if(canWego(grid,n,i,j-1)) fn(grid,n,i,j-1);

    grid[i][j] = 0; // back tracking

}
int RatMaze(int n, vector<vector<int>>& grid) {
    ans = 0;
    fn(grid,n,0,0);
    return ans;
}
int main() {
    int n = 7;
    vector<vector<int>> grid(n);
    grid = {
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout << RatMaze(n,grid);
}