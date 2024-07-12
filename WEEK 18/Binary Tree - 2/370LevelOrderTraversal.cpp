# include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* right;
    Node* left;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int levels(Node* root) {
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void nthLevel(Node* root, int curr, int level) {
    if(root==NULL) return;
    if(curr == level) {
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
}
void LOT(Node* root) {
    int n = levels(root);
    for(int i=1;i<=n;i++) {
        nthLevel(root,1,i);
        cout << endl;
    }
}
int main() {
    Node* a = new Node(1); //root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->right = c;
    a->left = b;
    b->right = e;
    b->left = d;
    c->right = g;
    c->left = f;
    LOT(a);
}