# include <iostream>
# include <vector>
# include <unordered_set>
using namespace std;
void addEdge(int sr, int des, vector<unordered_set<int>>& graph, bool bidire = true) {
    graph[sr].insert(des);
    if(bidire) {
        graph[des].insert(sr);
    }
}
void display(vector<unordered_set<int>>& graph) {
    for(int i=0;i<graph.size(); i++) {
        cout << i << " -> ";
        for(auto ele : graph[i]) {
            cout << ele << " ";
        }
        cout << endl;
    }
}
int main() {
    vector<unordered_set<int>> graph;
    int v,e;
    cout << "Enter the number of vertex : ";
    cin >> v;
    cout << "Enter the number of edges : ";
    cin >> e;
    graph.resize(v);
    while(e--) {
        int sr, des;
        cin >> sr >> des;
        addEdge(sr,des,graph); // change
    }
    display(graph); 
}