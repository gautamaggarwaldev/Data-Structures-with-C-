# include <iostream>
using namespace std;
# include <iostream>
using namespace std;
class Node { // user defined data type
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Queue { // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int val) {
        if(size==0) {
            Node* temp = new Node(val);
            head = tail = temp;
        }
        else {
            Node* temp = new Node(val);
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void pop() {
        if(size==0) {
            cout << "Queue is Empty" << endl;
            return;
        }
        else {
            Node* temp = head;
            head = head->next;
            size--;
            delete(temp);
        }
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
    Queue q;
    q.push(10);
    q.push(10);
    q.push(60);
    q.push(40);
    q.push(30);
    q.push(20);
    q.display();
    q.push(50);
    q.pop();
    q.pop();
    q.display();
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size << endl;
    cout << q.isEmpty() << endl;
   
}