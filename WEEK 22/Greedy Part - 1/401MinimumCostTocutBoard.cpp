# include <iostream>
# include <vector>
# include <algorithm>
# define ll long long int
using namespace std;
ll minCost(int n, int m, vector<int>& vertical, vector<int>& horizontal) {
    sort(vertical.rbegin(),vertical.rend());
    sort(horizontal.rbegin(),horizontal.rend());
    int hz = 1, vr = 1;
    int h = 0, v = 0;
    ll cost = 0;
    while(h<horizontal.size() && v<vertical.size()) {
        if(vertical[v] > horizontal[h]) {
            cost += vertical[v]*vr;
            hz++;
            v++;
        }
        else {
            cost += horizontal[h]*hz;
            vr++;
            h++;
        }
    }
    while(h<horizontal.size()) {
        cost += horizontal[h]*hz;
        vr++;
        h++;
    }
    while(v<vertical.size()) {
        cost += vertical[v]*vr;
        hz++;
        v++;
    }
    return cost;
}
int main() {
    int n = 6, m = 4;
    vector<int> vertical = {4,2,6};
    vector<int> horizontal = {1,2,1,4,3};
    cout << minCost(n,m,vertical,horizontal);

    
}