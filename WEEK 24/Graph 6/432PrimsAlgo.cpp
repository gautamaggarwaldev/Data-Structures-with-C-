# include <iostream>
# include <vector>
# include <unordered_set>
# include <unordered_map>
# include <queue>
# include <list>
# define ll long long int
using namespace std;
vector<list<pair<int,int>>>g;
void addEdge(int src, int des, int wt, bool bidir = true) {
    g[src].push_back({des,wt});
    if(bidir) {
        g[des].push_back({src,wt});
    }
}

ll Prims(int v, int src) {
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq; // min heap
    unordered_set<int> visited;
    vector<int> parent(v+1);
    unordered_map<int,int>mp;
    for(int i=1;i<=v;i++) {
        mp[i] = INT_MAX;
    }
    pq.push({0,src});
    mp[src] = 0;
    int EdgeCount = 0;
    ll ans = 0;
    while(EdgeCount < v && !pq.empty()) {
        auto curr = pq.top();
        if(visited.count(curr.second)) {
            pq.pop();
            continue;
        }
        visited.insert(curr.second);
        EdgeCount++;
        ans += curr.first;
        pq.pop();
        for(auto nebar : g[curr.second]) {
            if(!visited.count(nebar.first) && mp[nebar.first] > nebar.second) {
                pq.push({nebar.second, nebar.first});
                parent[nebar.first] = curr.second;
                mp[nebar.first] = nebar.second;
            }
        }
    }
    return ans;
}

int main() {
    int v,e;
    cin >> v >> e;
    g.resize(v+1,list<pair<int,int>> ());
    while(e--) {
        int src, des, wt;
        cin >> src >> des >> wt;
        addEdge(src,des,wt);
    }
    int src;
    cin >> src;
    cout << "Minimum Weight of the Subtree : " << Prims(v,src);
   
}