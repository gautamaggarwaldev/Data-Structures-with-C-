# include <iostream>
using namespace std;
int main() {
    int x = 12, y = 24;
    // int *p1 = &x, p2 = &y;   ---> shows an error
    // int *p1 = x, p2 = y;     ---> shows an error
    int *p1 = &x, p2 = y;
}