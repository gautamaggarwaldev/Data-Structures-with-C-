#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a integer : ";
    cin >> n;
    if(n % 3 == 0 || n % 5 == 0) {
        cout << "number divisible by 5 or 3";
    }
    else {
        cout << "number not divisible by 5 or 3";
    }
}