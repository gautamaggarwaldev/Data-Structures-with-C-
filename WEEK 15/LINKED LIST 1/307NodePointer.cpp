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
    Node* a = new Node(10);
    Node* b = new Node(16);
    Node* c = new Node(78);
    Node* d = new Node(89);

    a->next = b;
    b->next = c;
    c->next = d;

    cout << "Print value of Node c using Node a : " << a->next->next->val << endl;
    cout << "Print value of Node d using Node a : " << a->next->next->next->val << endl;

    //Printing Linked List
    Node* temp = a;
    while(temp!=NULL) {
        cout << temp->val << "-->";
        temp = temp->next;
    }
    cout << "NULL";
    // 10 --> 16 --> 78 --> 89 --> NULL
}