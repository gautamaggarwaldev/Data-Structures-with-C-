# include <iostream>
using namespace std;
void permutation(string &str, int i) {
    if(i==str.size()) cout << str << endl;
    for(int idx = i; idx < str.size(); idx++) {
        swap(str[idx],str[i]);
        permutation(str,i+1);
        swap(str[i],str[idx]); //BACKTRACKING
    }
}
int main() {
    string str = "abc";
    permutation(str,0);
}