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
bool isMax(Node* root) {
    if(root==NULL) return true;
    if(root->left!=NULL && root->val < root->left->val) return false;
    if(root->right!=NULL && root->val < root->right->val) return false;
    return isMax(root->left) && isMax(root->right);
}
int main() {
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    if(isMax(a) && isCBT(a)) cout << "Yes, given BT is a Max Heap";
    else cout << "No, given BT is not a Max Heap";

}