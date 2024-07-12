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

void displayRec(Node* head) {
    if(head==NULL) return; // base case
    displayRec(head->next); // call
    cout << head->val << "-->"; // kaam
}

int main() {
    Node* a = new Node(25);
    Node* b = new Node(50);
    Node* c = new Node(75);
    Node* d = new Node(100);

    a->next = b;
    b->next = c;
    c->next = d;

    displayRec(a);
    cout << "NULL";
}