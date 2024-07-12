# include <iostream>
using namespace std;
int maze(int row, int col) {
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int Rightways = maze(row, col-1);
    int Downways = maze(row-1, col);
    int Totalways = Rightways + Downways;
    return Totalways;
}
void printWays(int row, int col, string s) {
    if(row<1 || col<1) return ;
    if(row==1 && col==1) {
        cout << s << endl;
        return;
    }
    printWays(row, col-1, s+'R');
    printWays(row-1, col, s+'D');
    
}
int main() {
    printWays(4,4,"");
    
}