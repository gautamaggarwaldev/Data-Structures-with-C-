# include <iostream>
using namespace std;
class Node {
public :    
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
int main() {
    // creation of node
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //linking node
    a.next = &b;
    b.next = &c;
    c.next = &d;
    a.next->val = 50;
    cout << a.next->val << endl;  // [ cout << b.val; ]

    // access Node c using Node a
    cout << a.next->next->val << endl;
    
    // access Node d using Node a
    cout << a.next->next->next->val;
}