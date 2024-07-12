#include <iostream>
using namespace std;
int main() {
    int monthNumber;
    cout << "Enter the month number(1-12) : ";
    cin >> monthNumber;
        //1 3 5 7 8 10 12 ---> 31days
        //4 6 9 11 ---> 30days
        //2 ---> 28days
    switch((monthNumber <= 7 && monthNumber % 2 != 0)  ||  (monthNumber>=8 && monthNumber % 2 == 0)) {
        case 1 :
            cout << "31";
    }
    switch(monthNumber == 2) {
        case 1 :
            cout << "28";
    }
    switch(monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) {
        case 1 :
            cout << "30";
    }
}