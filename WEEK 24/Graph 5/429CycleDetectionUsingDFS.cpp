# include <bits/stdc++.h>
using namespace std;
void addEdge(int sr, int des,vector<list<int>>& graph, bool bidire = true) {
    graph[sr].push_back(des);
    if(bidire) {
        graph[des].push_back(sr);
    }
}

bool dfs(int src, int parent, unordered_set<int>& vis, vector<list<int>>& graph) { //TC = O(v+e)
    vis.insert(src);
    for(auto neighbor : graph[src]) {
        if(vis.count(neighbor) && neighbor!=parent) {
            //cycle detected
            return true;
        }
        if(!vis.count(neighbor)) {
            bool res = dfs(neighbor,src,vis,graph);
            if(res==true) return true;
        }
    }
    return false;
}

bool has_Cycle(int v, vector<list<int>>& graph) {
    unordered_set<int>vis;
    for(int i=0;i<v;i++) {
        if(!vis.count(i)) {
            bool ans = dfs(i,-1,vis,graph);
            if(ans==true) return true;
        }
    }
    return false;
}

int main() {
    vector<list<int>> graph;
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
    bool b = has_Cycle(v,graph);
    if(b) cout << "Cycle Detected ---> " << b << endl;
    else cout << "Cycle Not Detected ---> " << b << endl;
}