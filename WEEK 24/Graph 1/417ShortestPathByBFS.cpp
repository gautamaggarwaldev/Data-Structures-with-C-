# include <iostream>
# include <vector>
# include <list>
# include <unordered_set>
# include <queue>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;
void addEdge(int sr, int des, bool bidire = true) {
    graph[sr].push_back(des);
    if(bidire) {
        graph[des].push_back(sr);
    }
}

void bfs(int sr, int des, vector<int>& dist) {
    queue<int> q;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[sr] = 0;
    visited.insert(sr);
    q.push(sr);
    while(!q.empty()) {
        int curr = q.front();
        cout << curr << " ";
        q.pop();
        for(auto neighbour : graph[curr]) {
            if(!visited.count(neighbour)) {
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
    cout << endl;
}
// TC = O(V+E)    SC = O(V)
int main() {
    cout << "Enter the number of vertex : ";
    cin >> v;
    graph.resize(v,list<int>());
    int e;
    cout << "Enter the number of edges : ";
    cin >> e;
    cout << "Enter the values of vetices : " << endl;
    while(e--) {
        int sr, des;
        cin >> sr >> des;
        addEdge(sr,des);
    }
    int x,y;
    cout << "Enter starting and ending nodes : ";
    cin >> x >> y;
    vector<int> dist;
    bfs(x,y,dist);
    for(int i=0;i<dist.size();i++) {
        cout << dist[i] << " ";
    }
}