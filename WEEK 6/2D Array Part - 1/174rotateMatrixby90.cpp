# include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the row and column : ";
    cin >> m;
    int mt[m][m];
    //input
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cin  >> mt[i][j];
        }
    }
    cout << endl;
    //print
    cout << "ORIGINAL MATRIX : " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //transpose the same matrix
    for(int i = 0; i < m; i++) {
        for(int j = i+1; j < m; j++) {
            int temp = mt[i][j];
            mt[i][j] = mt[j][i];
            mt[j][i] = temp;
        }
    }
    //rotate by 90 degree
    for(int k = 0; k < m; k++) {
        int i = 0;
        int j = m-1;
        while(i<=j) {
            int temp = mt[k][i];
            mt[k][i] = mt[k][j];
            mt[k][j] = temp;
        i++;
        j--;
        }
    }
    //print
    cout << "ROTATED MATRIX : " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}