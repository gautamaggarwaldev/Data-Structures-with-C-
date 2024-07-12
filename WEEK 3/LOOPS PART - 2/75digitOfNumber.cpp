# include <iostream>
using namespace std;
int main() {
    int num, digit = 0;
    cout << "Enter the number : ";
    cin >> num;
    int a = num;
    while(num > 0) {
        num /= 10;
        digit++;
    }
    if(a == 0) cout << 1;
    else cout << digit << endl;
}