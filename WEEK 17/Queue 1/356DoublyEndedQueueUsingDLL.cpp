# include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node*next;
    Node*prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque { // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    Deque() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push_back(int val) {
        if(size==0) {
            Node* temp = new Node(val);
            head = tail = temp;
        }
        else {
            Node* temp = new Node(val);
            tail->next = temp;
            temp->prev = tail; //extra
            tail = temp;
        }
        size++;
    }

    void push_front(int val) {
        if(size==0) {
            Node* temp = new Node(val);
            head = temp;
            tail = temp;
        }
        else {
            Node* temp = new Node(val);
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        size++;
    }

    void pop_front() {
        if(size==0) {
            cout << "List is Empty";
            return;
        }
        else {
            head = head->next;
            if(head!=NULL) head->prev = NULL; // extra
            if(head==NULL) tail = NULL; // extra
            size--;
        }
    }

    void pop_back() {
        if(size==0) {
            cout << "List is Empty";
            return;
        }
        else if(size==1) { // extra
            pop_front();
            return;
        }
        Node* temp = tail->prev; // extra
        temp->next = NULL; // extra
        tail = temp;// extra
        size--;
    }

    int front() {
        if(size==0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return head->val;
    }

    int back() {
        if(size==0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return tail->val;
    }

    bool isEmpty() {
        if(size==0) return true;
        else return false;
    }

    void display() {
        Node* temp = head;
        while(temp!=NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};
int main() {
    Deque dq;
    dq.push_front(10);
    dq.push_front(10);
    dq.push_front(60);
    dq.push_front(40);
    dq.push_front(30);
    dq.push_back(9690);
    dq.push_back(2066);
    dq.push_back(45);
    dq.display();
    dq.push_front(50);
    dq.pop_front();
    dq.pop_front();
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
    dq.display();
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    cout << dq.size << endl;
    cout << dq.isEmpty() << endl;
    
}