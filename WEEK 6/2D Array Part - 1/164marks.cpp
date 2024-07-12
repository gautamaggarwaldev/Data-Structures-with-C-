# include <iostream>
using namespace std;
int main() {
    int marks[4][2];
    cout << "Enter marks and rollnumber of students : " << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++) {
            cin >> marks[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++) {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
}