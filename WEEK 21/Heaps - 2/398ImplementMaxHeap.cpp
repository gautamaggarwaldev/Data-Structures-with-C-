# include <iostream>
using namespace std;
class MaxHeap {
public:
    int idx;
    int arr[50];
    MaxHeap() {
        idx = 1;
    }
    int top() {
        return arr[1];
    }
    void push(int x) {
        arr[idx] = x;
        int i = idx;
        idx++;
        while(i!=1) {
            int parent = i/2;
            if(arr[i]>arr[parent]) swap(arr[i],arr[parent]);
            else break;
            i = parent;
        }
    }
    void pop() {
        idx--;
        arr[1] = arr[idx];
        int i=1;
        while(1) {
            int left = 2*i, right = 2*i+1;
            if(left>idx-1) break;
            if(right>idx-1) {
                if(arr[i]<arr[left]) {
                    swap(arr[i],arr[left]);
                    i = left;
                }
                break;
            }
            if(arr[left]>arr[right]) {
                if(arr[left]>arr[i]) {
                    swap(arr[i],arr[left]);
                    i = left;
                }
                else break;
            }
            else {
                if(arr[right]>arr[i]) {
                    swap(arr[i],arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }
    int size() {
        return idx-1;
    }
    void display() {
        for(int i=1;i<=idx-1;i++) {
            cout << arr[i] << " ";
        }
    }
};
int main() {
    MaxHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(60);
    pq.push(70);
    pq.push(15);
    pq.push(35);
    pq.push(5);
    cout << "Size : " << pq.size() << endl;
    cout << "Top element : " << pq.top() << endl;
    pq.display();
    pq.pop();
    pq.pop();
    cout << endl << "Size : " << pq.size() << endl;
    cout << "Top element : " << pq.top() << endl;
    pq.display();
    
}