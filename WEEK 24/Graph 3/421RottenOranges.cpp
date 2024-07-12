# include <iostream>
# include <vector>
# include <queue>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        int fo = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]==1) fo++;
                if(grid[i][j]==2) q.push({i,j}); //multi source bfs if initially 
                //more than 1 rotten oranges are present in the grid
            }
        }
        int mins = 0;
        vector<vector<int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
        q.push({-1,-1});
        while(q.size()!=0) {
            auto cell = q.front();
            q.pop();
            if(cell.first==-1 && cell.second==-1) {
                mins++;
                if(q.size()!=0) q.push({-1,-1});
                else break;
            }
            else {
                int i = cell.first;
                int j = cell.second;
                for(int d=0;d<4;d++) {
                    int nr = i +dir[d][0];
                    int nc = j + dir[d][1]; 
                    if(nr<0 || nc<0 || nr>=n || nc>=m) continue;
                    if(grid[nr][nc]==2 || grid[nr][nc]==0) continue;
                    fo--;
                    grid[nr][nc] = 2;
                    q.push({nr,nc});
                }
            }

        }
        return (fo==0) ? mins-1 : -1;
    }
};
int main() {
   
}