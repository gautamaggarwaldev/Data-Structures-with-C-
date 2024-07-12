#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a integer : ";
    cin >> n;
    if(n % 3 == 0 && n % 5 == 0) {
    //if (n % 15 == 0)
    
        cout << "it is divisible by 5 and 3";
    }
    else
    {
        cout << "not divisible by 5 and 3";
    }
}