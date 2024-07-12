# include <iostream>
# include <vector>
using namespace std;
int find(vector<int>& parent, int x) {
    if(parent[x]==x) return x;
    return parent[x] = find(parent,parent[x]);
}
void Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    a = find(parent,a);
    b = find(parent,b);
    if(a==b) return; //means both a and b are in same set
    if(rank[a]>rank[b]) {
        rank[a]++;
        parent[b] = a;
    }
    else {
        rank[b]++;
        parent[a] = b;
    }
}
int main() {
    // n -> no.of elements, m-> no. of queries
    int n,m;
    cin >> n >> m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0;i<=n;i++) {
        parent[i] = i;
    }
    
    while(m--) {
        string str;
        cin>>str;
        if(str=="union") {
            int x,y;
            cin >> x >> y;
            Union(parent,rank,x,y);
        }
        else {
            int x;
            cin >> x;
            cout << find(parent,x) << endl;
        }
    }
}