# include <bits/stdc++.h>
using namespace std;
void addEdge(int sr, int des,vector<list<int>>& graph, bool bidire = true) {
    graph[sr].push_back(des);
    if(bidire) {
        graph[des].push_back(sr);
    }
}

bool bfs(int v, int src, vector<list<int>>& graph) { //TC = O(v+e)
    unordered_set<int>vis;
    queue<int> q;
    vector<int>parent(v,-1);
    q.push(src);
    vis.insert(src);
    while(q.size()!=0) {
        int curr = q.front();
        q.pop();
        for(auto neighbor : graph[curr]) {
            if(vis.count(neighbor) && parent[curr]!=neighbor) return true;
            if(!vis.count(neighbor)) {
                vis.insert(neighbor);
                parent[neighbor] = curr;
                q.push(neighbor);
            }
        }
    }
    return false;  
}

bool has_Cycle(int v, vector<list<int>>& graph) {
    unordered_set<int>vis;
    for(int i=0;i<v;i++) {
        if(!vis.count(i)) {
            bool ans = bfs(v,i,graph);
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