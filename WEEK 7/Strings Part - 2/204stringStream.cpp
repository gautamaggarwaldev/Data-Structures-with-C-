# include <iostream>
# include <sstream>
using namespace std;
int main() {
   string str = "garima is    a chemistry teacher";
   stringstream ss(str);
   string temp;
   while(ss>>temp) {
    cout << temp << endl;
   }
}