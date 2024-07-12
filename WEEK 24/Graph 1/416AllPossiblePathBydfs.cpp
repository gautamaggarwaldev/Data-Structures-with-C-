# include <iostream>
# include <vector>
# include <list>
# include <unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;

void addEdge(int sr, int des, bool bidire = true) {
    graph[sr].push_back(des);
    if(bidire) {
        graph[des].push_back(sr);
    }
}
void dfs(int curr, int end, vector<int>& path) {
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour : graph[curr]) {
        if(not visited.count(neighbour)) {
            dfs(neighbour,end,path);   
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void AllPath(int sr, int des) {
    vector<int> v;
    dfs(sr,des,v);
}
int main() {
    int v,e;
    cout << "Enter the number of vertex : ";
    cin >> v;
    graph.resize(v,list<int>());
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
    AllPath(x,y);
    for(auto path : result) {
        for(auto ele : path) {
            cout << ele << " ";
        }
        cout << endl;
    }
}