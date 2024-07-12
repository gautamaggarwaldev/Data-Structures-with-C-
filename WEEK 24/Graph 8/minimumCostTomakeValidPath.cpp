# include <iostream>
# include <vector>
# include <queue>
using namespace std;
class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dist(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dist[i][j] = 1e9;
            }
        }
        vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};
        deque<pair<int,int>> dq;
        dq.push_back({0,0});
        dist[0][0] = 0;

        while(!dq.empty()) {
            auto curr = dq.front();
            dq.pop_front();
            int i = curr.first;
            int j = curr.second;
            int di = grid[i][j];
            for(int d=0;d<4;d++) {
                int nr = i+dir[d][0];
                int nc = j+dir[d][1];
                int edgewt = 1;
                if(d+1==di) edgewt = 0;
                if(nr<n && nc<m && nr>=0 && nc>=0) {
                    //next cell lie in a grid
                    if(dist[nr][nc] > dist[i][j]+edgewt) {
                        dist[nr][nc] = dist[i][j]+edgewt;
                        if(edgewt==1) dq.push_back({nr,nc});
                        else dq.push_front({nr,nc});
                    }
                }
            }
        }
        return dist[n-1][m-1];
    }
};
int main() {
   
}