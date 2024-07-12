# include <iostream>
# include <queue>
# include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();//rows
        int m = mat[0].size(); //cols
        vector<vector<int>> ans(n,vector<int>(m,-1));
        vector<vector<int>>dir = {{0,1},{0,-1},{-1,0},{1,0}};
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(mat[i][j]==0) {
                    ans[i][j] = 0;
                    q.push({i,j}); // multisource bfs
                }
            }
        }
        while(q.size()) {
            auto cell = q.front();
            int i = cell.first;
            int j = cell.second;
            q.pop();
            for(int d=0;d<4;d++) {
                int nr = i + dir[d][0];
                int nc = j + dir[d][1];
                if(nr<0 || nc<0 || nc>=m ||nr>=n || ans[nr][nc]!=-1) continue;
                q.push({nr,nc});
                ans[nr][nc] = 1+ans[i][j];    
            }
        }
        return ans;
    }
};
int main() {
   
}