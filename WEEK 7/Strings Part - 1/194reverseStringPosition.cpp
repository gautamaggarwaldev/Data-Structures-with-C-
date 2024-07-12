# include <iostream>
# include <algorithm>
using namespace std;
int main() {
   string s;
   cout << "Enter string : "; 
   getline(cin, s);
   reverse(s.begin()+1, s.begin()+5);  //string reverse from index 1 to 4 
   cout << s;
}