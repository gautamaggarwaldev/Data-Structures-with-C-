# include <iostream>
# include <vector>
using namespace std;
class Node {
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
void morrisTraversal(Node* root, vector<int>& v) {
    Node* curr = root;
    while(curr!=NULL) {
        if(curr->left!=NULL) {
            Node* pred = curr->left;
            while(pred->right!=NULL && pred->right!=curr) {
                pred = pred->right;
            }
            if(pred->right==NULL) { //link
                pred->right = curr;
                curr = curr->left;
            }
            if(pred->right==curr) {//unlink
                pred->right = NULL;
                v.push_back(curr->val);
                curr = curr->right;
            }
        }
        else {
            v.push_back(curr->val);
            curr = curr->right;
        } 
    }
}
int main() {
    Node* a = new Node(25);
    Node* b = new Node(36);
    Node* c = new Node(20);
    Node* d = new Node(10);
    Node* e = new Node(22);
    Node* f = new Node(30);
    Node* g = new Node(40);
    Node* h = new Node(5);
    Node* i = new Node(12);
    Node* j = new Node(28);
    Node* k = new Node(38);
    Node* l = new Node(48);
    Node* m = new Node(45);
    Node* n = new Node(50);
    Node* o = new Node(1);
    Node* p = new Node(8);
    Node* q = new Node(15);

    a->left = c;
    c->left = d;
    c->right = e;
    d->left = h;
    d->right = i;
    h->left = o;
    h->right = p;
    i->right = q;
    a->right = b;
    b->left = f;
    b->right = g;
    f->left = j;
    g->left = k;
    g->right = l;
    l->left = m;
    l->right = n;

    vector<int> v;
    
    morrisTraversal(a,v);
    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
}