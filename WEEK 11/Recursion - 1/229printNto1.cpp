# include <iostream>
using namespace std;
void print(int x) {
    if(x==0) return; //base case
    cout << x << endl; // kaam
    print(x-1); // recursive call

}
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    print(n);
}