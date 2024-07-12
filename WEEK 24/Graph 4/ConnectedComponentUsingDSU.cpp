# include <iostream>
# include <vector>
# include <set>
using namespace std;
int find(vector<int>& parent, int x) {
    if(parent[x]==x) return x;
    return parent[x] = find(parent, parent[x]);
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
void CC(int n, vector<int>& parent) {
    set<int> s;
    for(int i=0;i<n;i++) {
        s.insert(find(parent,i));
    }
    cout << s.size();
}
int main() {
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
        Union(parent,rank,x,y);
    }
    CC(n,parent); 
}