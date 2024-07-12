# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
bool meetingRooms (vector<vector<int>>& Intervals) {
    vector<int> start;
    vector<int> end;
    for(auto ele : Intervals) {
        start.push_back(ele[0]);
        end.push_back(ele[1]);
    }
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());
    int i = 0, j = 0, rooms = 0, ans = 0;

    while(i<start.size() && j<end.size()) {
        if(start[i]<end[j]) {
            i++;
            rooms++;
            ans = max(rooms,ans);
        }
        else if(start[i]>end[j]) {
            j++;
            rooms--;
        } 
        else {
            i++;
            j++;
        }
    }
    if(ans==1) return true;
    else return false;
}
int main() {
    vector<vector<int>> Intervals = {{7,10}, {2,4}};
    cout << meetingRooms(Intervals);

}