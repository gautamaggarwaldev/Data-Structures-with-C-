# include <iostream>
using namespace std;
int power(int x, int n) {
    if(n==1) return x;
    int ans = power(x,n/2);
    if(n%2 == 0) return ans * ans;
    else return ans * ans * x;
    
}
int main() {
    int x,n;
    cout << "Enter the base : ";
    cin >> x;
    cout << "Enter the exponent : ";
    cin >> n;
    cout << power(x,n);
}