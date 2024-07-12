# include <iostream>
using namespace std;
int main() {
    int num, lastDigit = 0, reverse;
    cout << "Enter the number : ";
    cin >> num;
    while(num > 0) {
        lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num /= 10;
    }
    cout << reverse << endl;
}