# include <iostream>
using namespace std;
int main() {
    int n;
    int count = 0;
    cout << "Enter the number : ";
    cin>>n;
    while(n>0) {
        count++;
        n = (n & (n-1));
    }
    cout << count;
}