# include <iostream>
using namespace std;
int main() {
     int m;
    cout << "Enter the number of rows : ";
    cin >> m;
    int n;
    cout << "Enter the number of columns : ";
    cin >> n;
    int matrix[m][n];
     for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    cout << sum << endl;

}