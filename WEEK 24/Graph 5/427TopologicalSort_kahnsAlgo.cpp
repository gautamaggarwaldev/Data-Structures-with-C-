# include <iostream>
# include <vector>
# include <queue>
# include <list>
# include <unordered_set>
using namespace std;
int v;
void addEdge(vector<list<int>>& graph, int a, int b, bool bidir = true) {
    graph[a].push_back(b);
    if(bidir) {
        graph[b].push_back(a);
    }
}

void TopoBFS(vector<list<int>>& graph) {
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++) {
        for(auto neighbor : graph[i]) {
            indegree[neighbor]++;
        }
    }
    queue<int> q;
    unordered_set<int>visited;
    for(int i=0;i<v;i++) {
        if(indegree[i]==0) {
            q.push(i);
            visited.insert(i);
        }
    }
    while(q.size()!=0) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(auto neighbor : graph[node]) {
            if(not visited.count(neighbor)) {
                indegree[neighbor]--;
                if(indegree[neighbor]==0) {
                    q.push(neighbor);
                    visited.insert(neighbor);
                }
            }
        }

    }
}

int main() {
    int e;
    cin >> v >> e;
    vector<list<int>> graph(v);
    while(e--) {
        int x,y;
        cin >> x >> y;
        addEdge(graph,x,y,false);
    }
    TopoBFS(graph);
}