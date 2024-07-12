// DISJOINT SET UNION
# include <iostream>
# include <vector>
using namespace std;
int find(vector<int>& parent, int x) {
    //TC = O(log*n) ~= constant
    if(parent[x]==x) return x;
    return parent[x] = find(parent, parent[x]);
}

void Union(vector<int>& parent, vector<int>& rank,vector<int>& size, vector<int>& minimal, vector<int>& maximal, int a, int b) {
    //TC = O(log*n) ~= constant
    a = find(parent,a);
    b = find(parent,b);
    if(a==b) return; //both a and b are in same set
    if(rank[a]<rank[b]) {
        rank[b]++;
        parent[a] = b;
        size[b] += size[a];
        maximal[b] = max(maximal[b],maximal[a]);
        minimal[b] = min(minimal[b],minimal[a]);
    }
    else {
        rank[a]++;
        parent[b] = a;
        size[a] += size[b];
        maximal[a] = max(maximal[b],maximal[a]);
        minimal[a] = min(minimal[b],minimal[a]);
    }
}

void file_i_o() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    file_i_o();
    //n = no. of elements
    //m = no of queries
    int n, m;
    cin >> n >> m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    vector<int> size(n+1,1);
    vector<int> minimal(n+1);
    vector<int> maximal(n+1);
    for(int i=0;i<=n;i++) {
        parent[i] = minimal[i] = maximal[i] = i;
    }

    while(m--) {
        string str;
        cin >> str;
        if(str == "union") {
            int x,y;
            cin >> x >> y;
            Union(parent,rank,size,minimal,maximal,x,y);
        }
        else {
            int x;
            cin >> x;
            find(parent,x);
            cout << minimal[x] << " " << maximal[x] << " " << size[x] << endl;
        }
    }   
}