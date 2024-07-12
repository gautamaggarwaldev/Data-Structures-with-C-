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
    //column wave form
    for(int j = 0; j < n; j++) {
        if(j%2==0) {
            for(int i = 0; i < m; i++) {
                cout << a[i][j] << " ";
            }
        }
        else{
            for(int i = m-1; i >= 0; i--) {
                cout << a[i][j] << " ";
            }
        }
    }
}