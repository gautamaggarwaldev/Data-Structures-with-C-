# include <iostream>
# include <vector>
# include <queue>
using namespace std;
class Solution { 
public:
    vector<vector<bool>>bfs(int rows, int cols, vector<vector<int>>& heights, queue<pair<int,int>>& q, vector<vector<int>>& dir) {
        vector<vector<bool>>visited(rows,vector<bool>(cols,false));
        while(q.size()!=0) {
            auto cell = q.front();
            q.pop();
            int i = cell.first;
            int j = cell.second;
            visited[i][j] = true;
            for(int d=0;d<4;d++) {
                int newRow = i+dir[d][0];
                int newCol = j+dir[d][1];
                if(newRow<0 || newCol<0 || newRow>=rows || newCol>=cols) continue;
                if(visited[newRow][newCol]) continue;
                if(heights[newRow][newCol]<heights[i][j]) continue;//heights[newRow][newCol] = it is the heightsof neighbor node
                q.push({newRow,newCol});
            }
        }
        return visited;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int rows = heights.size();
        int cols = heights[0].size();

        vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

        queue<pair<int,int>> pacificbfs;
        queue<pair<int,int>> atlanticbfs;

        for(int i=0;i<rows;i++) {
            pacificbfs.push({i,0});
            atlanticbfs.push({i,cols-1});
        }
        for(int j=1;j<cols;j++) {
            pacificbfs.push({0,j});
        }
        for(int j=0;j<cols-1;j++) {
            atlanticbfs.push({rows-1,j});
        }

        vector<vector<bool>> pacific = bfs(rows,cols,heights,pacificbfs,dir);
        vector<vector<bool>> atlantic = bfs(rows,cols,heights,atlanticbfs,dir);

        vector<vector<int>> result;
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                if(pacific[i][j] and atlantic[i][j]) result.push_back({i,j});
            }
        }
        return result;
    }
};
int main() {
   
}