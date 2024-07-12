# include <iostream>
# include <vector>
using namespace std;
bool isSafe(vector<vector<char>>& board, int r, int c, int num) {
    //row check
    for(int i=0;i<9;i++) {
        if(board[r][i]-'0'==num) return false;
    }
    //col check
    for(int i=0;i<9;i++) {
        if(board[i][c]-'0'==num) return false;
    }
    //big cell check
    int x = (r/3)*3;
    int y = (c/3)*3;

    for(int i=x;i<x+3;i++) {
        for(int j=y;j<y+3;j++) {
            if(board[i][j]-'0'==num) return false;
        }
    }
    return true;
}
bool helper(vector<vector<char>>& board, int r,int c) {
    if(r==9) return true;
    if(c==9) return helper(board,r+1,0);
    if(board[r][c]!='.') return helper(board,r,c+1);
    for(int j=1;j<=9;j++) {
        if(isSafe(board,r,c,j)) {
            board[r][c] = '0' + j;

            bool retval = helper(board,r,c+1);
            if(retval==true) return true;
            board[r][c] = '.'; // back tracking
        }
    }
    return false;
}
int main() {
    vector<vector<char>> board;

    helper(board,0,0);
    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
   
}