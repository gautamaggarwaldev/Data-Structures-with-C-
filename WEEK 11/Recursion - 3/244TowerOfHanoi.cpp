# include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c) {
    if(n==0) return;
    hanoi(n-1,a,c,b);  //Source Helper Destination
    cout << a << " -> " << c << endl;
    hanoi(n-1,b,a,c); //Source Helper Destination
}
int main() {
    int n = 3;
    hanoi(n,'A','B','C');
}