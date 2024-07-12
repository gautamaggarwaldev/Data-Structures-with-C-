# include <iostream>
# include <vector>
# include <list>
using namespace std;
void addEdge(int sr, int des,vector<list<int>>& graph, bool bidire = true) {
    graph[sr].push_back(des);
    if(bidire) {
        graph[des].push_back(sr);
    }
}
void display(vector<list<int>>& graph) {
    for(int i=0;i<graph.size(); i++) {
        cout << i << " -> ";
        for(auto ele : graph[i]) {
            cout << ele << " ";
        }
        cout << endl;
    }
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
    display(graph); 
}