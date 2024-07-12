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
void dfs(int node, unordered_set<int>& visited, vector<list<int>>& graph) {
    visited.insert(node);
    for(auto i : graph[node]) {
        if(!visited.count(i)) {
            dfs(i,visited,graph);
        }
    }
}
int connCompo(int v, unordered_set<int>& visited, vector<list<int>>& graph) {
    int result = 0;
    for(int i=0;i<v;i++) {
        if(!visited.count(i)) {
            result++;
            dfs(i,visited,graph);
        }
    }
    return result;
}
int main() {
    vector<list<int>> graph;
    unordered_set<int>visited;
    int v,e;
    cout << "Enter the number of vertex : ";
    cin >> v;
    cout << "Enter the number of edges : ";
    cin >> e;
    graph.resize(v);
    while(e--) {
        int sr, des;
        cin >> sr >> des;
        addEdge(sr,des,graph);
    }
    cout << "Total number of connected component : " << connCompo(v,visited,graph); 
}
