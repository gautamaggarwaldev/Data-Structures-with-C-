# include <iostream>
using namespace std;
int fibo(int n) {
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fibo(n-1) + fibo(n-2);
}
int main() {
    int n;
    cout << "Enter the nth term in fibonacci series : ";
    cin >> n;
    cout << endl;
    cout << "**The " << n << "th term of series = " << fibo(n) << endl << endl;
}