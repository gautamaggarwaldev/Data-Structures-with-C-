# include <iostream>
using namespace std;
void greed(int x) {
    if(x==0) return;
    cout << "Good Morning" << endl;
    greed(x-1);
}
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    greed(n);
}