# include <iostream>
# include <sstream>
# include <vector>
# include <algorithm>
using namespace std;
int main() {
    string str = "garima is a chemistry teacher. garima is a EVS teacher as well, garima";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp) {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int maxCount = 1;
    int count = 1;
    int n = v.size();
    for(int i = 1; i < n; i++) {
        if(v[i] == v[i-1]) count ++;
        else count = 1;
        maxCount = max(maxCount,count);
    }
    count = 1;
    for(int i = 1; i < n; i++) {
        if(v[i] == v[i-1]) count ++;
        else count = 1;
        if(count == maxCount) {
            cout << v[i] << " : " << maxCount << endl;
        }
    }
}