# include <iostream>
using namespace std;
class Node {  // A Perfect Node Class
public :
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
int main() {
    //creation of node
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //Linking
    a.next = &b;
    b.next = &c;
    c.next = &d;

    //printing a Linked List
    Node temp = a;
    while(1) {
        cout << temp.val << " --> ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }

}