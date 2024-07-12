# include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the row : ";
    cin >> n;
    int a = 2;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) a = 1;  //even row no.
        else a = 0;    //odd row no.
        for(int j = 1; j <= i; j++) {
            cout << a << " ";
            // flipping
            if(a==0) a = 1;
            else a = 0;
        }
        cout << endl;
    }   
}

# include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter n : ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            // if((i%2 == 0 && j%2 == 0) || (i%2 != 0 && j%2 != 0)) cout << 1;
            if((i+j)%2 == 0) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}



