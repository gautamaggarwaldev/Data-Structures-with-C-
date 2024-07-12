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

class LinkedList { // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
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

    void insertAtBeginning(int val) {
        if(size==0) {
            Node* temp = new Node(val);
            head = temp;
            tail = temp;
        }
        else {
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int val, int idx) {
        if(idx<0 || idx>size) cout << "Invalid";
        else if(idx==0) insertAtBeginning(val);
        else if(idx==size) insertAtEnd(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<=idx-1; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }

    }

    int getIdxValue(int idx) {
            Node* temp = head;
        if(idx<0 || idx>=size) {
            cout << "Invalid";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size) tail->val;
        else {
            for(int i=1;i<=idx;i++) {
                temp = temp->next;
            }
        }
        return temp->val;
    }

    void displayLL() {
        Node* temp = head;
        while(temp!=NULL) {
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtEnd(20); // 20-->NULL
    ll.insertAtEnd(40); // 20-->40-->NULL
    ll.displayLL();
    cout << "Current size of a Linked List : " << ll.size << endl;

    ll.insertAtBeginning(10);
    ll.insertAtBeginning(50);
    ll.displayLL();  // 50-->10-->20-->40-->NULL
    cout << "Current size of a Linked List : " << ll.size << endl;

    ll.insertAtIdx(52,2);
    ll.displayLL();  // 50-->10-->52-->20-->40-->NULL
    cout << "Current size of a Linked List : " << ll.size << endl;

    cout << ll.getIdxValue(4) << endl;
    cout << ll.getIdxValue(3) << endl;
    cout << ll.getIdxValue(2) << endl;
    cout << ll.getIdxValue(1) << endl;
    cout << ll.getIdxValue(0) << endl;

}