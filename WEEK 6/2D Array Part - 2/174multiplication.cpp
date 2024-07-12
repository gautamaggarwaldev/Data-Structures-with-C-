# include <iostream>
# include <vector>
using namespace std;
int main() {
    int m;
    cout << "Enter the row of 1st matrix : ";
    cin >> m;
    int n;
    cout << "Enter the column of 1st matrix : ";
    cin >> n;

    int x;
    cout << "Enter the row of 2nd matrix : ";
    cin >> x;
    int y;
    cout << "Enter the column of 2nd matrix : ";
    cin >> y;
    cout << endl;

    if(n == x) {
        int a[m][n];
        cout << "Enter the elements of 1st matrix : " << endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        cout << endl;
        
        int b[x][y];
        cout << "Enter the elements of 2nd matrix : " << endl;
        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                cin >> b[i][j];
            }
        }
        cout << endl;

        //res matrix
        int res[m][y];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < y; j++) {
                //multiply
                //res[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j]
                res[i][j] = 0;
                for(int k = 0; k < x; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        //print
        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else {
        cout << "The matrices can not be multiply";
    }

}