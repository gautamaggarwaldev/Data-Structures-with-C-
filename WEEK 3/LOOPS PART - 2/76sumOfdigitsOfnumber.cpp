# include <iostream>
using namespace std;
int main() {
    int num, last_digit = 0, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    while(num > 0) {
        last_digit = num % 10; 
        sum += last_digit;
        num /= 10;
    }
    cout << sum;
}