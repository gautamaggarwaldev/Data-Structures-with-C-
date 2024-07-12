# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int minProduct(vector<int>& v) {
    int cz = 0, cn = 0, cp = 0;
    int prod_pos = 1, prod_neg = 1;
    int largestNegative = INT_MIN;

    for(int i=0;i<v.size();i++) {
        if(v[i]==0) cz++;
        if(v[i]>0) {
            cp++;
            prod_pos *= v[i];
        }
        if(v[i]<0) {
            cn++;
            prod_neg *= v[i];
            largestNegative = min(largestNegative,v[i]);
        }
    }
    if(cn==0) {
        if(cz>0) return 0;
        else {
            auto ele = min_element(v.begin(),v.end());
            return *ele;
        }
    }
    else {
        if(cn%2==0) {
            return (prod_neg * prod_pos) / largestNegative;
        }
        else {
            return prod_neg * prod_pos;
        }
    }
    
}
int main() {
    vector<int> v = {-2,-3,1,4,-2};
    cout << minProduct(v);
    
}