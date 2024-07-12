#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;
    if(marks>=91) {
        cout << "Excellent";
    }
    else if(marks>=81){
        cout << "Very Good";
    }
    else if(marks>=71){
        cout << "Good";
    }
    else if(marks>=61){
        cout << "Can do better";
    }
    else if(marks>=51){
        cout << "Average";
    }
    else if(marks>=41){
        cout << "Below Average";
    }
    else{
        cout << "Fail";
    }



    // if(marks<=100 && marks>=91) {
    //     cout << "Excellent";
    // }
    // if(marks<=90 && marks>=81) {
    //     cout << "Very Good";
    // }
    // if(marks<=80 && marks>=71) {
    //     cout << "Good";
    // }
    // if(marks<=70 && marks>=61) {
    //     cout << "Can do better";
    // }
    // if(marks<=60 && marks>=51) {
    //     cout << "Average";
    // }
    // if(marks<=50 && marks>=40) {
    //     cout << "Below Average";
    // }
    // else{
    //     cout << "Fail";
    // }
}