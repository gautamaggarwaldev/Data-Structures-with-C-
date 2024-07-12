# include <iostream>
# include <vector>
using namespace std;
vector<vector<string>>result;
vector<vector<char>>grid;
bool CanPlaceQueen(int row, int col, int n) {
    //check the position of queen that it is attacked or not by other queen
    // column check
    for(int i=row-1;i>=0;i--) {
        if(grid[i][col]=='Q') return false; //attack found
    }
    //left diagonal check i+1 and j-1
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--) {
        if(grid[i][j]=='Q') return false; //attack found
    }
    //right diagonal check i+1 and j+1
    for(int i=row-1, j=col+1; i>=0 && j<n; i--,j++) {
        if(grid[i][j]=='Q') return false;//attack found
    }
    //If not attack found 
    return true;
}
void fn(int row, int n) {
    if(row==n) {
        vector<string>temp;
        for(int i=0;i<n;i++){
            string res = "";
            for(int j=0;j<n;j++) {
                res += grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
    }
    for(int col = 0; col < n; col++) {
        if(CanPlaceQueen(row,col,n)) {
            grid[row][col] = 'Q';
            fn(row+1,n);
            grid[row][col] = '.'; //back tracking step 
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    grid.clear();
    result.clear();
    grid.resize(n,vector<char>(n,'.'));
    fn(0,n);
    return result;
}
int main() {
    int n;
    cin >> n;
    
    solveNQueens(n);

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}