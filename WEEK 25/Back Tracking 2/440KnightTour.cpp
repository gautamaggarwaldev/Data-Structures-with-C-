# include <iostream>
# include <vector>
using namespace std;
bool isItSafe(vector<vector<int>>& grid, int i, int j, int n) {
    return i>=0 && j>=0 && i<n && j<n && grid[i][j] == -1;
}
vector<int>dx = {-2,-1,-2,-1,2,1,2,1};
vector<int>dy = {1,2,-1,-2,1,2,-1,-2};

void display(vector<vector<int>>& grid, int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << grid[i][j] << "\t";
        }
        cout << endl;
    }
}

void helper(vector<vector<int>>& grid, int i, int j, int n, int count) {
    if(count == n*n-1) {
        grid[i][j] = count;
        display(grid,n);
        cout << "*********" << endl;
        grid[i][j] = -1;
        return;
    }
    for(int k=0;k<8;k++) {
        if(isItSafe(grid,i+dx[k],j+dy[k],n)) {
            grid[i][j] = count;
            helper(grid,i+dx[k],j+dy[k],n,count+1);
            grid[i][j] = -1;
        }
    }
}

void KnightTour(int n, int i, int j) {
    vector<vector<int>> grid(n,vector<int>(n,-1));
    helper(grid,i,j,n,0);
}
int main() {
    KnightTour(5,0,0);
}