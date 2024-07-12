# include <iostream>
# include <vector>
using namespace std;
int main() {
    vector<int> v;//   S   C   
    v.push_back(6);//  1   1
    v.push_back(1);//  2   2
    v.push_back(9);//  3   4
    v.push_back(10);// 4   4 
    v.push_back(6);//  5   8
    v.push_back(1);//  6   8
    v.push_back(9);//  7   8
    v.push_back(10);// 8   8
    v.push_back(6);//  9   16
    v.push_back(1);//  10  16
    v.push_back(9);//  11  16
    v.push_back(6);//  12  16
    v.push_back(1);//  13  16
    v.push_back(9);//  14  16
    v.push_back(10);// 15  16
    v.push_back(6);//  16  16
    v.push_back(1);//  17  32
    v.push_back(9);//  18  32
    v.push_back(10);// 19  32
    v.push_back(6);//  20  32
    v.push_back(1);//  21  32
    v.push_back(9);//  22  32
    cout << "Size is : " << v.size() << endl;  //22
    cout << "Capacity is : " << v.capacity() << endl;//32
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "*New Size is : " << v.size() << endl;// 22-9=13
    cout << "*New Capacity is : " << v.capacity() << endl;//32
}