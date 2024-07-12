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
    if(head==NULL) return;  // base case
    cout << head->val << "-->"; // kaam
    displayRec(head->next); // call
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(16);
    Node* c = new Node(41);
    Node* d = new Node(26);

    a->next = b;
    b->next = c;
    c->next = d;

    displayRec(a);
    cout << "NULL";
}