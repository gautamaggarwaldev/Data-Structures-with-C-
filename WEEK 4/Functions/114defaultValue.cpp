# include <iostream>
using namespace std;
// Case 1
// 7,8
void func(int x = 7, int y = 8) {  
    cout << x << " , " << y;
}
int main() {
   func();
}


// Case 2
// 4,6
// void func(int x = 7, int y = 8) {  
//     cout << x << " , " << y;
// }
// int main() {
//    func(4,6);
// }


// Case 3
// 4,8
// void func(int x = 7, int y = 8) {  
//     cout << x << " , " << y;
// }
// int main() {
//    func(4);
// }


// Case 4
// ERROR
// void func(int x = 7, int y) {  
//     cout << x << " , " << y;
// }
// int main() {
//    func(4);
// }


// Case 5
// 4,3.1
// void func(int x = 7, float y = 3.1) {  
//     cout << x << " , " << y;
// }
// int main() {
//    func(4);
// }


// Case 6
// 4,3.1
// void func(int x = 7, float y = 3.1) {  
//     cout << x << " , " << y;
// }
// int main() {
//    func(4.7);
// }


// Case 7
// 0,1
// void func(int x = 7, bool y = true) {  
//     cout << x << " , " << y;
// }
// int main() {
//    func(false);
// }