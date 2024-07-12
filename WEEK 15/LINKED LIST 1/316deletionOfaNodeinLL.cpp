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

    void deleteAtBeginning() {
        if(size==0) {
            cout << "List is Empty";
            return;
        }
        else {
            head = head->next;
            size--;
        }
    }

    void deleteAtEnd() {
        Node* temp = head;
        if(size==0) {
            cout << "List is Empty";
            return;
        }
        else {
            while(temp->next!=tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtIdx(int idx) {
        if(idx<0 || idx>=size) {
            cout << "Invalid";
            return;
        }
        else if(idx==0) deleteAtBeginning();
        else if(idx==size) deleteAtEnd();
        else {
            Node* temp = head;
            for(int i=1;i<=idx-1;i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
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
    ll.insertAtEnd(40); 
    ll.insertAtEnd(70); 
    ll.insertAtBeginning(10);
    ll.insertAtBeginning(60);
    ll.insertAtIdx(21,2);
    ll.insertAtIdx(63,4);
    ll.displayLL();
    cout << endl;

    // Deletion is happen
    ll.deleteAtBeginning();
    ll.displayLL();

    ll.deleteAtEnd();
    ll.displayLL();

    ll.deleteAtIdx(2);
    ll.displayLL();

    cout << "Size of LL : " << ll.size << endl;
  
}