# include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the number of rows and columns : ";
    cin >> m;
    int arr[m][m];
     for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;
     for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl;
    //transpose in same matrix
    for(int i = 0; i < m; i++) {
        for(int j = i+1; j < m; j++) {
            //swapping of i,j and j,i
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
        }
    }
    
    //print transpose
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }

}