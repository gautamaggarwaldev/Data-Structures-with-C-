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
    ll.displayLL();
    cout << "Current size of a Linked List : " << ll.size << endl;

    ll.insertAtEnd(40); // 20-->40-->NULL
    ll.displayLL();
    cout << "Current size of a Linked List : " << ll.size << endl;

    ll.insertAtEnd(70); 
    ll.insertAtEnd(30); 
    ll.insertAtEnd(80);
    ll.insertAtEnd(90); 
    ll.displayLL();  // 20-->40-->70-->30-->80-->90-->NULL
    cout << "Current size of a Linked List : " << ll.size << endl;

    cout << "***********************" << endl;

    ll.insertAtBeginning(10);
    ll.displayLL();  // 10-->20-->40-->70-->30-->80-->90-->NULL
    cout << "Current size of a Linked List : " << ll.size << endl;

    ll.insertAtBeginning(60);
    ll.insertAtBeginning(47);
    ll.insertAtBeginning(26);
    ll.insertAtBeginning(93);
    ll.displayLL();  // 93-->26-->47-->60-->10-->20-->40-->70-->30-->80-->90-->NULL
    cout << "Current size of a Linked List : " << ll.size << endl;


    ll.insertAtIdx(52,5);
    ll.displayLL();  // 93-->26-->47-->60-->10-->52-->20-->40-->70-->30-->80-->90-->NULL
    cout << "Current size of a Linked List : " << ll.size << endl;

    ll.insertAtIdx(21,2);
    ll.insertAtIdx(63,4);
    ll.insertAtIdx(69,8);
    ll.displayLL();  // 93-->26-->21-->47-->63-->60-->10-->52-->69-->20-->40-->70-->30-->80-->90-->NULL
    cout << "Current size of a Linked List : " << ll.size << endl;
}