# include <iostream>
# include <vector>
# include <unordered_set>
# include <unordered_map>
# include <queue>
# include <list>
using namespace std;
vector<list<pair<int,int>>>g;
void addEdge(int src, int des, int wt, bool bidir = true) {
    g[src].push_back({des,wt});
    if(bidir) {
        g[des].push_back({src,wt});
    }
}

unordered_map<int,int> Dijkstra(int v, int src) { //TC = O(VlogV + ElogV)
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq; // min heap {wt,node}
    unordered_set<int> visited;
    vector<int> via(v+1);
    unordered_map<int,int>mp;
    for(int i=0;i<v;i++) { //O(V)
        mp[i] = INT_MAX;
    }
    pq.push({0,src});
    mp[src] = 0;
    while(!pq.empty()) { // O((V+E)logV)
        auto curr = pq.top();
        if(visited.count(curr.second)) {
            pq.pop();
            continue;
        }
        visited.insert(curr.second);
        pq.pop();
        for(auto nebar : g[curr.second]) {
            if(!visited.count(nebar.first) && mp[nebar.first] > mp[curr.second] + nebar.second) {
                pq.push({mp[curr.second] + nebar.second, nebar.first});
                via[nebar.first] = curr.second;
                mp[nebar.first] = mp[curr.second] + nebar.second;
            }
        }
    }
    return mp;
}

int main() {
    int v,e;
    cin >> v >> e;
    g.resize(v,list<pair<int,int>> ());
    while(e--) {
        int src, des, wt;
        cin >> src >> des >> wt;
        addEdge(src,des,wt);
    }
    int src;
    cout << "Enter source node : ";
    cin >> src;
    unordered_map<int,int> sp =   Dijkstra(v,src);
    for(auto p : sp) {
        cout << p.first << " -> " << p.second << endl;
    }
    int des;
    cout << "Enter destination node : ";
    cin >> des;
    cout << sp[des];
}