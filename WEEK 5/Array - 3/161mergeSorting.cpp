# include <iostream>
# include <vector>
using namespace std;
vector<int> merge(vector<int> &v1, vector<int> &v2) {
    int n = v1.size();
    int m = v2.size();
    vector<int> res(m+n);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m) {
        if(v1[i] < v2[j]) {
            res[k] = v1[i];
            i++;
            k++;
        }
        else {
            res[k] = v2[j];
            j++;
            k++;
        }
    }
    if(i==n) { // v1 ke saare element utha chucka hu
        while(j<m) {
            res[k] = v2[j];
            j++;
            k++;
        }
    }
    if(j==m) { // v2 ke saare element utha chucka hu
        while(i<n) {
            res[k] = v1[i];
            i++;
            k++;
        }
    }
    return res; // return vector
}
void display(vector<int> a, int size) {
    size = a.size();
    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
   vector<int> v1;
   v1.push_back(1);
   v1.push_back(4);
   v1.push_back(5);
   v1.push_back(8);
   display(v1,v1.size()); // v1
   vector<int> v2;
   v2.push_back(6);
   v2.push_back(8);
   v2.push_back(2);
   v2.push_back(3);
   v2.push_back(7);
   v2.push_back(10);
   display(v2,v2.size()); // v2
   vector<int> v = merge(v1,v2); // function calling
   display(v,v.size()); // merge sorted array
   
}