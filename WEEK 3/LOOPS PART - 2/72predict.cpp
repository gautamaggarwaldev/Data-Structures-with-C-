# include <iostream>
using namespace std;
int main() {
    int x = 4, y = 0, z;
    while(x >= 0) {
        x--; // x=3  [x=2]  x=1  x=0  x=-1
        y++; // y=1  [y=2]  y=3  y=4  y=5
        if(x == y)
            continue; // []
        else
            cout << x << " " << y << endl;
    }
}