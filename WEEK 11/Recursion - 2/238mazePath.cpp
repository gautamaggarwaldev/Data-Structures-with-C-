// sr = starting row
// er = ending row
// sc = starting column
// ec = ending column
# include <iostream>
int maze(int sr, int sc, int er, int ec) {
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int Rightways = maze(sr,sc+1,er,ec);
    int Downways = maze(sr+1,sc,er,ec);
    int Totalways = Rightways + Downways;
    return Totalways;
}
using namespace std;
int main() {
    cout << maze(1,1,3,5);
}