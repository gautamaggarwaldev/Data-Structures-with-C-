# include <iostream>
using namespace std;
int main() {
    int n, x;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search : ";
    cin >> x;
    //check mark
    bool flag = false;    //false ---> not present
    for(int i = 1; i <= n; i++) {
        if(arr[i] == x) flag = true;
    }
    if(flag == true) cout << "Present";
    else cout << "404 Absent";
    
}