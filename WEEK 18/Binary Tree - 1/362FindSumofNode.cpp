# include <iostream>
using namespace std;
class Node { // This is a node class for a binary tree
public:
    Node* right;
    Node* left;
    int val;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int sum(Node* root) {
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int main() {
    Node* a = new Node(1); //root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(5);

    a->right = c;
    a->left = b;
    b->right = e;
    b->left = d;
    c->right = g;
    c->left = f;
    cout << sum(a);
}