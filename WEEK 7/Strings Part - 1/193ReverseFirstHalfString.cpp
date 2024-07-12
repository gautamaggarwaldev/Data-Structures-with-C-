# include <iostream>
# include <algorithm>
using namespace std;
int main() {
    string s;
    cout << "Enter string : ";
    getline(cin,s);
    int n = s.length(); //n should be even

    reverse(s.begin()+0, s.begin()+n/2);

    cout << s << endl;
}