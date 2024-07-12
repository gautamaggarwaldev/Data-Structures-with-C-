# include <iostream>
using namespace std;
string decimal2binary(int num) {
    string ans;
    while(num>0) {
        if(num%2==0) ans = '0' + ans; //prepand 0 means 0 ko last mein add kr do
        else ans = '1' + ans;
        num = num >> 1;
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter decimal number : ";
    cin >> n;
    cout << decimal2binary(n);
   
}