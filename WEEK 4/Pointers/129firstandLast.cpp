# include <iostream>
using namespace std;
void find(int n, int *ptr1, int *ptr2) {
    *ptr2 = n % 10;   //last digit
    while(n > 9) {
        n /= 10;
    }
    *ptr1 = n;
    return;
}
int main() {
    int n; 
    cout << "Enter number : ";
    cin >> n;
    int fd, ld;
    int *ptr1 = &fd;
    int *ptr2 = &ld;
    find(n, ptr1, ptr2);
    cout << "First digit = " << fd << endl;
    cout << "Last digit = " << ld << endl;
}