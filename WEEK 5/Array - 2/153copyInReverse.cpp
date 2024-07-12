# include <iostream>
# include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the size : ";
    cin >> n;
   vector<int> v1;
   cout << "Enter the elements : ";
   for(int i = 0; i < n; i++) {
        int q; 
        cin >> q;
        v1.push_back(q);
   }
   for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
   }
   cout << endl;
   vector<int> v2(v1.size());
   for(int i = 0; i <= v2.size(); i++) {
        v2[i] = v1[v1.size() - 1 - i];
   }
   for(int i = 0; i < v1.size(); i++) {
        cout << v2[i] << " ";
   }

}