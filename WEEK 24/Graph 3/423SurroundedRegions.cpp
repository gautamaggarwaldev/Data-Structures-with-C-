# include <iostream>
# include <queue>
# include <vector>
using namespace std;
class Solution {
public:
    void solve(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>>visited(row,vector<int>(col,0));
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                if(i==0 || j==0 || i==row-1 || j==col-1) {
                    if(grid[i][j]=='O'){
                        q.push({i,j});
                        visited[i][j] = 1;
                    }
                }
            }
        }
        vector<vector<int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
        while(q.size()) {
            auto cell = q.front();
            q.pop();
            int x = cell.first;
            int y = cell.second;
            for(int d=0;d<4;d++) {
                int nr = x + dir[d][0];
                int nc = y + dir[d][1];
                if(nr>=0&&nc>=0&&nr<row&&nc<col&&!visited[nr][nc]&&grid[nr][nc]=='O') {
                    visited[nr][nc] = 1;
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                if(grid[i][j]=='O' && !visited[i][j]) grid[i][j] = 'X';
            }
        }
        return;
    }
};
int main() {
   
}