// 1-2+3-4+5-6+7-8.....
//SUM ALTERNATE
# include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    if(n % 2 == 0) cout << -(n/2) << endl;
    else cout << (n/2) + 1 << endl;
    
    // for(int i = 0; i <= n; i++) {
    //     if(i % 2 != 0) sum += i;
    //     else sum -= i;
    // }
//     cout << sum;
}