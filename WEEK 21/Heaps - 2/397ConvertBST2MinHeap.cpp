# include <iostream>
# include <vector>
# include <queue>
using namespace std;
class Node {
public :
    int val;
    Node* right;
    Node* left;
    Node(int val) {
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};
void inorder(Node* root, vector<int>& v) {
    if(root==NULL) return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
void preorder(Node* root, vector<int>& v, int& i) {
    if(root==NULL) return;
    root->val = v[i++];
    preorder(root->left,v,i);
    preorder(root->right,v,i);
} 
void levelOrderTraversalUsingQueue(Node* root) { //Breadth First Search BFS
    queue<Node*> q;
    q.push(root);
    while(q.size()>0) {
        Node* temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout << endl;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    vector<int> v;
    inorder(a,v);
    levelOrderTraversalUsingQueue(a);
    int i=0;
    preorder(a,v,i);
    levelOrderTraversalUsingQueue(a);
}