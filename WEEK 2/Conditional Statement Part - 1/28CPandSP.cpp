#include <iostream>
using namespace std;
int main() {
    int sp, cp, profit, loss;
    cout << "Enter the cost price : ";
    cin >> cp;
    cout << "Enter the selling price : ";
    cin >> sp;
    profit = sp - cp;
    loss = cp - sp;

    if(sp > cp) {
        cout << "!! PROFIT !!" << endl;
        cout << "Total profit made by you = " << profit;
    }
    if(cp > sp) {
        cout << "## LOSS ##" << endl;
        cout << "Total loss made by you = " << loss;
    }
    if(cp == sp) {
        cout << "No Profit , No Loss";
    }


}