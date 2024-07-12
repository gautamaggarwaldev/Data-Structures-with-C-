// NESTED IF-ELSE
# include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number : ";
    cin >> x;
    if(x % 3 == 0 || x % 5 == 0) {
        if(x % 15 != 0) {
            cout << "Number is divisible by 3 or 5 but not 15";
        }
        else {
            cout << "Not matching a condition";
        }
    }
    else {
        cout << "Not matching a condition";
    }
}


// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter the number : ";
//     cin >> num;
//     if((num % 3 == 0 || num % 5  == 0)  &&  num % 15 != 0) {
//         cout << "Number is divisible by 3 or 5 but not 15";
//     }
//     else {
//         cout << "Not matching a condition";
//     }
// }
