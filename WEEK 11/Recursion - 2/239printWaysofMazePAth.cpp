# include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec) {
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int Rightways = maze(sr,sc+1,er,ec);
    int Downways = maze(sr+1,sc,er,ec);
    int Totalways = Rightways + Downways;
    return Totalways;
}
void printWays(int sr, int sc, int er, int ec, string s) {
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec) {
        cout << s << "  ";
        return;
    }
    printWays(sr,sc+1,er,ec, s+'R');
    printWays(sr+1,sc,er,ec, s+'D');
    
}
int main() {
    printWays(1,1,4,4,"");
    
}