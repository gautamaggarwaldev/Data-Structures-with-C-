# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
bool cmp (pair<int,int> &p1, pair<int,int> &p2) {
    double r1 = (p1.first*1.0) / (p1.second*1.0);
    double r2 = (p2.first*1.0) / (p2.second*1.0);
    return r1 > r2;
}
double fractionalNapsack(vector<int> &profit, vector<int> &weight, int n, int w) {
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) {
        v.push_back({profit[i],weight[i]});
    }
    sort(v.begin(),v.end(), cmp);
    double pfit = 0;
    for(int i=0;i<n;i++) {
        if(v[i].second <= w) {
            pfit += v[i].first;
            w -= v[i].second;
        }
        else {
            pfit += ((v[i].first*1.0) / (v[i].second*1.0))*w;
            w = 0;
            break;
        }
    }
    return pfit;
}
int main() {
    vector<int> profit = {350,135,240};
    vector<int> weight = {15,6,4};
    int n = profit.size();
    int w = 10;
    cout << fractionalNapsack(profit,weight,n,w);
    // TC = O(nlogn)
}