# include <iostream>
# include <vector>
# include <list>
# include <unordered_set>
using namespace std;
void addEdge(int sr, int des,vector<list<int>>& graph, bool bidire = true) {
    graph[sr].push_back(des);
    if(bidire) {
        graph[des].push_back(sr);
    }
}
bool dfs(int curr, int end, unordered_set<int>visited, vector<list<int>>& graph) {
    if(curr==end) return true;
    visited.insert(curr);
    for(auto neighbour : graph[curr]) {
        if(not visited.count(neighbour)) {
            bool result = dfs(neighbour,end,visited,graph);
            if(result) return true;
        }
    }
    return false;
}
bool IsAnyPath(int sr, int des, unordered_set<int>visited, vector<list<int>>& graph) {
    return dfs(sr,des,visited,graph);
}
// TC = O(V+E)
int main() {
    vector<list<int>> graph;
    unordered_set<int>visited;
    int v,e;
    cout << "Enter the number of vertex : ";
    cin >> v;
    cout << "Enter the number of edges : ";
    cin >> e;
    graph.resize(v);
    cout << "Enter the values of vetices : " << endl;
    while(e--) {
        int sr, des;
        cin >> sr >> des;
        addEdge(sr,des,graph);
    }
    int x,y;
    cout << "Enter starting and ending nodes : ";
    cin >> x >> y;
    cout << IsAnyPath(x,y,visited,graph);
}