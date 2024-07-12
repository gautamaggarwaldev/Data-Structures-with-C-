#include <iostream>
using namespace std;
int main() {
    int monthNumber;
    cout << "Enter the month number(1-12) : ";
    cin >> monthNumber;
    switch(monthNumber) {
        case 1 :
            cout << "January" << endl;
            cout << "Total number of days = 31";
            break;
        case 2 :
            cout << "Februrary" << endl;
            cout << "Total number of days = 28";
            break;
        case 3 :
            cout << "March" << endl;
            cout << "Total number of days = 31";
            break;
        case 4 :
            cout << "April" << endl;
            cout << "Total number of days = 30";
            break;
        case 5 :
            cout << "May" << endl;
            cout << "Total number of days = 31";
            break;
        case 6 :
            cout << "June" << endl;
            cout << "Total number of days = 30";
            break;
        case 7 :
            cout << "July" << endl;
            cout << "Total number of days = 31";
            break;
        case 8 :
            cout << "August" << endl;
            cout << "Total number of days = 31";
            break;
        case 9 :
            cout << "September" << endl;
            cout << "Total number of days = 30";
            break;
        case 10 :
            cout << "October" << endl;
            cout << "Total number of days = 31";
            break;
        case 11 :
            cout << "November" << endl;
            cout << "Total number of days = 30";
            break;
        case 12 :
            cout << "December" << endl;
            cout << "Total number of days = 31";
            break;
        default : 
            cout << "Invalid Input";
    }
}