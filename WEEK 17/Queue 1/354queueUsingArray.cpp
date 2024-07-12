# include <iostream>
# include <vector>
using namespace std;
class Queue {
public:
    vector<int> arr;
    int f, b, size;
    Queue(int val) {
        f = 0;
        b = 0;
        size = 0;
        vector<int> v(val);
        arr = v;
    }

    void push(int val) {
        if(b==arr.size()) {
            cout << "Queue is Full" << endl;
            return;
        }
        else {
            arr[b] = val;
            b++;
            size++;
        }
    }

    void pop() {
        if(size==0) {
            cout << "Queue is empty" << endl;
            return;
        }
        f++;
        size--;
    }

    int size1() {
        return size;
    }

    int front() {
        if(size==0) {
            cout << "Queue is empty";
            return -1;
        }
        else return arr[f];
    }

    int back() {
        if(size==0) {
            cout << "Queue is empty";
            return -1;
        }
        else return arr[b-1];
    }

    bool isEmpty() {
        if(size==0) return true;
        else return false;
    }

    void display() {
        for(int i=f;i<b;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Queue q(10);
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