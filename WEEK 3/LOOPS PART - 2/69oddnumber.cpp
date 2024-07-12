# include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 100; i += 2) {
        if(i%2==0)
            continue;
        cout << i << endl;
    }
}