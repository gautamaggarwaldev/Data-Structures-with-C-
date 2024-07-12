# include <iostream>
# include <vector>
using namespace std;
int main() {
   vector<int> v(5,7); // intial size = 5 and each element has value = 7
   cout << v.size() << endl;
   cout << v.capacity() << endl;
   cout << v[0] << " "; // 7
   cout << v[1] << " "; // 7
   cout << v[2] << " "; // 7
   cout << v[3] << " "; // 7
   cout << v[4] << " "; // 7
}