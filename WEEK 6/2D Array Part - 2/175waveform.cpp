# include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the row : ";
    cin >> m;
    int n; 
    cout << "Enter the column : ";
    cin >> n;
    int a[m][n];
    //input
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Original matrix : " << endl;
    //print
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    //wave form
    for(int i = 0; i < m; i++) {
        if(i%2==0) {
            for(int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
        }
        else{
            for(int j = n-1; j >= 0; j--) {
                cout << a[i][j] << " ";
            }
        }
            cout << endl;
    }
}