# include <iostream>
# include <vector>
# include <list>
using namespace std;
void addEdge(int sr, int des,int wt, vector<list<pair<int,int>>>& graph, bool bidire = true) {
    graph[sr].push_back({des,wt});
    if(bidire) {
        graph[des].push_back({sr,wt});
    }
}
void display(vector<list<pair<int,int>>>& graph) {
    for(int i=0;i<graph.size(); i++) {
        cout << i << " -> ";
        for(auto ele : graph[i]) {
            cout << "(" << ele.first << "," << ele.second << ")" << " ";
        }
        cout << endl;
    }
}
int main() {
    vector<list<pair<int,int>>> graph;
    int v,e;
    cout << "Enter the number of vertex : ";
    cin >> v;
    cout << "Enter the number of edges : ";
    cin >> e;
    graph.resize(v);
    while(e--) {
        int sr, des, wt;
        cin >> sr >> des >> wt;
        addEdge(sr,des,wt,graph); // change
    }
    display(graph); 
}