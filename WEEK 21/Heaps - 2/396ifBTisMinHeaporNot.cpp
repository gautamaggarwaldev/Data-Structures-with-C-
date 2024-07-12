# include <iostream>
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
int sizeofBT(Node* root) {
    if(root==NULL) return 0;
    return 1 + sizeofBT(root->left) + sizeofBT(root->right);
}
bool isCBT(Node* root) { //Breadth First Search BFS
    int size = sizeofBT(root);
    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(count<size) {
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL) {
            q.push(temp->left);
            q.push(temp->right);
        } 
        
    }
    while(q.size()>0) {
        Node* temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}
bool isMin(Node* root) {
    if(root==NULL) return true;
    if(root->left!=NULL && root->val > root->left->val) return false;
    if(root->right!=NULL && root->val > root->right->val) return false;
    return isMin(root->left) && isMin(root->right);
}
int main() {
    Node* a = new Node(15);
    Node* b = new Node(20);
    Node* c = new Node(22);
    Node* d = new Node(25);
    Node* e = new Node(30);
    Node* f = new Node(35);
    Node* g = NULL;

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    if(isMin(a) && isCBT(a)) cout << "Yes, given BT is a Min Heap";
    else cout << "No, given BT is not a Min Heap";

}