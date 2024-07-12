# include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the rows : ";
    cin >> n;
    // no. of star = n+1-i
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n-i+1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}