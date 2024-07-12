# include <iostream>
# include <algorithm>
using namespace std;
int main() {
    // string s = "gautam aggarwl is a b.tech 2nd year student";
    // cout << s.size() << endl;
    // cout << s.length() << endl;
    // int len = s.size();

    // string str = "abcd";
    // cout << str << endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout << str << endl;


    // string s = "Gautam";
    // cout << s << endl;
    // s.pop_back();
    // s.pop_back();
    // cout << s << endl;


    // string s = "abc";
    // cout << s << endl;
    // // string t = "defg";
    // s = "xyz" + s;   // append  add
    // cout << s << endl;


    string s = "abcdef"; // 0 1 2 3 4 5
    cout << s << endl;
    reverse(s.begin()+2, s.begin()+5);
    cout << s << endl;
}