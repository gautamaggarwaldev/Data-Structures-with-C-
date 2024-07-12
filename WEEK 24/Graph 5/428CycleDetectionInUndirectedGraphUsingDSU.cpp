// DISJOINT SET UNION
# include <iostream>
# include <vector>
using namespace std;
int find(vector<int>& parent, int x) {
    //TC = O(log*n) ~= constant
    if(parent[x]==x) return x;
    return parent[x] = find(parent, parent[x]);
}

bool Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    //TC = O(log*n) ~= constant
    a = find(parent,a);
    b = find(parent,b);
    if(a==b) return true; //cycle detected
    if(rank[a]<rank[b]) {
        rank[b]++;
        parent[a] = b;
    }
    else {
        rank[a]++;
        parent[b] = a;
    }
    return false;
}

int main() {
    //n = no. of vertices
    //m = no of edges
    //TC = O(e * log*v)  ~= O(e)
    int n, m;
    cin >> n >> m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0;i<=n;i++) {
        parent[i] = i;
    }

    while(m--) {
        int x,y;
        cin >> x >> y;
        bool b = Union(parent,rank,x,y);  
        if(b) cout << "cycle detected...." << endl;
    }   
}