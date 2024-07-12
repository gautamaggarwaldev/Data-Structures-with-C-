#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a integer : ";
    cin >> x;
    if(x < 0) {
        cout  << "Absolute Value of " << x << " = "<< (-x);
    }
    else{
        cout << "Absolute Value of " << x << " = " << x;
    }
    cout << endl << x;     //value of x does not change 
}




// int n;
// cin >> n;
// if(n<0){
//     n = -n;
// }
// cout << n;