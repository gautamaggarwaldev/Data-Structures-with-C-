# include <iostream>
# include <vector>
using namespace std;
int main() {
    // vector<int> v1(5,2);
    // vector<vector<int> > v(3, vector<int> (4)); In this 2d vector 3 represents no. of vector and 4 represent size of each vector
    // it contain 3 vector and each vector has size of 4
    vector<vector<int> > v(3, vector<int> (4,20));  // 3--> rows   4--> columns
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v[0].size() << endl;
}