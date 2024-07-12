# include <iostream>
int maze(int row, int col) {
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int Rightways = maze(row, col-1);
    int Downways = maze(row-1, col);
    int Totalways = Rightways + Downways;
    return Totalways;
}
using namespace std;
int main() {
    cout << maze(3,3);
}