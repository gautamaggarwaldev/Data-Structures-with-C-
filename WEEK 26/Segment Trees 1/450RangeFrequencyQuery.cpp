# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;
class RangeFreqQuery {
public:
    int n;
    vector<unordered_map<int,int>> st;
    RangeFreqQuery(vector<int>& arr) {
        n = arr.size();
        st.resize(4*n);
        buildTree(arr,0,0,n-1);
    }

    void buildTree(vector<int>& arr, int i, int lo, int hi) {
        if(lo==hi) {
            (st[i])[arr[lo]] = 1;
            return;
        }
        int mid = lo + (hi-lo)/2;
        buildTree(arr,2*i+1,lo,mid);
        buildTree(arr,2*i+2,mid+1,hi);
        st[i] = addMaps(st[2*i+1],st[2*i+2]);
    }

    unordered_map<int,int> addMaps(unordered_map<int,int>& mp1, unordered_map<int,int>& mp2) {
        unordered_map<int,int> mp;
        for(auto x : mp1) {
            mp.insert(x);
        }
        for(auto x : mp2) {
            int key = x.first, freq = x.second;
            if(mp.find(key)!=mp.end()) { // key is found
                mp[key] += freq;
            } 
            else mp.insert(x);
        }
        return mp;
    }
    
    int getfreq(int i, int lo, int hi, int& l, int& r, int& key) {
        if(l>hi || r<lo) return 0;
        if(lo>=l && hi<=r) {
            if(st[i].find(key)==st[i].end()) return 0;
            else return st[i][key];
        }
        int mid = lo + (hi-lo)/2;
        int leftAns = getfreq(2*i+1,lo,mid,l,r,key); 
        int rightAns = getfreq(2*i+2,mid+1,hi,l,r,key);
        return leftAns + rightAns;
    }

    int query(int left, int right, int value) {
        return getfreq(0,0,n-1,left,right,value);
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
int main() {
   
}