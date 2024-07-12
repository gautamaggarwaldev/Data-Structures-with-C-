# include <iostream>
# include <vector>
# include <algorithm>
# define ll long long int
using namespace std;
int find(vector<int>& parent, int x) {
    if(parent[x]==x) return x;
    else return parent[x] = find(parent,parent[x]);
}
void Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    a = find(parent,a);
    b = find(parent,b);
    if(a==b) return;
    if(rank[a]<rank[b]) {
        rank[b]++;
        parent[a] = b;
    }
    else {
        rank[a]++;
        parent[b] = a;
    }
}
struct Edge {
    int src;
    int des;
    int wt;
};
bool cmp(Edge e1, Edge e2) {
    return e1.wt < e2.wt;
}
ll Kruskal(vector<Edge> &input, int v, int e) { //TC - O(V+ElogE)
    sort(input.begin(),input.end(),cmp);// ElogE
    vector<int> parent(v+1);
    vector<int> rank(v+1,0);
    for(int i=0;i<=v;i++) {
        parent[i] = i;
    }
    int EdgeCount = 0;
    ll ans = 0;
    int i = 0;
    while(EdgeCount < v-1 && i < input.size()) { // Vlog*V
        Edge curr = input[i]; //becaue we sort the input vector so we get minimum edge
        int srcPar = find(parent,curr.src);
        int desPar = find(parent,curr.des);
        if(srcPar != desPar) {
            //edge does not make a cycle
            Union(parent,rank,srcPar,desPar);
            EdgeCount++;
            ans += curr.wt;
        }
        i++;//does not matter you pick the last edge or not, we still go to the next edge
    } 
    return ans;
}
int main() {
    int v , e;
    cin >> v >> e;
    vector<Edge>input(e);
    for(int i=0;i<e;i++) {
        cin >> input[i].src >> input[i].des >> input[i].wt;  
    }

    cout << "Minimum Weight of the Subtree : " << Kruskal(input,v,e) << endl;
   
}