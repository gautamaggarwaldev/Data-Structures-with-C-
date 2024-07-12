# include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter number : ";
    cin >> x;
    string s = to_string(x);
    int digits = s.size();
    cout << "Total no. digits of = " << digits;
}