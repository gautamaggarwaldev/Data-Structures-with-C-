# include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the number of rows : ";
    cin >> m;
    int n;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][n];
     for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
     for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl;
    //store the transpose
    int t[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)  {
            t[i][j] = arr[j][i];
        }
    }
// print transpose
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)  {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;
}