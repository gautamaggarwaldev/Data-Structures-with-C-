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

    //spiral
    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;
    int tne = m*n;
    int count = 0;
    while(minr<=maxr && minc<=maxc) {
        //right
        for(int j = minc; j <= maxc && count < tne; j++) {
            cout << a[minr][j] << " ";
            count++;
        }
        minr++;
        //down
        for(int i = minr; i <= maxr && count < tne; i++) {
            cout << a[i][maxc] << " ";
            count++;
        }
        maxc--;
        //left
        for(int j = maxc; j  >= minc && count < tne; j--) {
            cout << a[maxr][j] << " ";
            count++;
        }
        maxr--;
        //up
        for(int i = maxr; i >= minr && count < tne; i--) {
            cout << a[i][minc] << " ";
            count++;
        }
        minc++;
    }
}