/*
$ Set always store unique values.
$ If we insert the duplicate value in set then it print a value only once.
$ And duplicate values does'nt affect the size of set.
*/
# include <iostream>
# include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.erase(2);
    cout << "Size of set : " << s.size() << endl;
    // display the set
    for(int ele : s) {
        cout << ele << " ";
    }

    // search / find in the set
    int target = 3;
    if(s.find(target)!=s.end()) {
        cout << "exist";
    }
    else cout << "does not exist";
}