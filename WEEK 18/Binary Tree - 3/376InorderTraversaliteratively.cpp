# include <iostream>
# include <stack>
# include <vector>
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
void inorder(Node* root, vector<int>& v) {
    stack<Node*> st;
    Node* node = root;
    while(st.size()>0 || node) {
        if(node) {
            st.push(node);
            node = node->left;
        }
        else {
            Node* temp = st.top();
            st.pop();
            v.push_back(temp->val);
            node = temp->right;
        }
    }
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
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
    vector<int> v;
    inorder(a,v);
}