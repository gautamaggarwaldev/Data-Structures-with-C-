# include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    while(head!=NULL) {
        cout << head->val << "-->";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Node* a = new Node(75);
    Node* b = new Node(16);
    Node* c = new Node(41);
    Node* d = new Node(26);

    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
}