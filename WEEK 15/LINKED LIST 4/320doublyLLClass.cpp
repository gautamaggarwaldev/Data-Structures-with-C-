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
class DoublyLL { // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    DoublyLL() {
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
            temp->prev = tail; //extra
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
            head->prev = temp; // extra
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
            t->prev = temp; // extra
            t->next->prev = t; // extra
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
            if(head!=NULL) head->prev = NULL; // extra
            if(head==NULL) tail = NULL; // extra
            size--;
        }
    }

    void deleteAtEnd() {
        if(size==0) {
            cout << "List is Empty";
            return;
        }
        else if(size==1) { // extra
            deleteAtBeginning();
            return;
        }
        Node* temp = tail->prev; // extra
        temp->next = NULL; // extra
        tail = temp;// extra
        size--;
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
            temp->next->prev = temp;// extra
            size--;
        }
    }

    int getIdxValue(int idx) {
        if(idx<0 || idx>=size) {
            cout << "Invalid";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size) return tail->val;
        else {
            if(idx<=idx/2) {
                Node* temp = head;
                for(int i=1;i<=idx;i++) {
                    temp = temp->next;
                }
                return temp->val;
            }
            else {
                Node* temp = tail;
                for(int i=1;i<size-idx;i++) {
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }

    void displayDLL() {
        Node* temp = head;
        while(temp!=NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayRevDLL() {
        Node* temp = tail;
        while(temp!=NULL) {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};
int main() {
    DoublyLL dll;
    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtBeginning(30);
    dll.insertAtBeginning(40);
    dll.displayDLL();
    dll.insertAtEnd(50);
    dll.displayDLL();
    dll.insertAtIdx(70,3);
    dll.displayDLL();
    dll.deleteAtEnd();
    dll.displayDLL();
    dll.deleteAtIdx(2);
    dll.displayDLL();
    dll.deleteAtBeginning();
    dll.insertAtBeginning(90);
    dll.insertAtBeginning(80);
    dll.displayDLL();
    cout << "Size of Linked List : " << dll.size << endl;
    cout << dll.getIdxValue(1);
}