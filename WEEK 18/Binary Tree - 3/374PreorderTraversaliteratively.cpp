# include <iostream>
# include <stack>
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
void preorder(Node* root) {
    stack<Node*> st;
    st.push(root);
    while(st.size()>0) {
        Node* temp = st.top();
        st.pop();
        cout << temp->val << " ";
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
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
    preorder(a);
}