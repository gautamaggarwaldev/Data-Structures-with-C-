# include <iostream>
using namespace std;
void print(int x, int y) {
    if(x<y) return; //base case
    cout << y << endl; // kaam
    print(x,y+1); // recursive call

}
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    print(n,1);
}