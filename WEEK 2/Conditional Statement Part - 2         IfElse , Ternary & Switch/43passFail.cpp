#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;
    //condition ? true : false
    (marks > 33) ? cout << "PASS" : cout << "FAIL";
} 