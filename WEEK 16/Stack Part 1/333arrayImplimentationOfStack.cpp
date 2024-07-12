# include <iostream>
# include <vector>
using namespace std;
class Stack {
public:
    vector<int> v;
    void push(int val) {
        v.push_back(val);
    }
    void pop() {
        if(v.size()==0) {
            cout << "Underflow!" << endl;
            return;
        }
        else v.pop_back();
    }
    int top() {
        if(v.size()==0) {
            cout << "Underflow!" << endl;
            return -1;
        }
        else return v[v.size()-1];
    }
    int size() {
        return v.size();
    }
    void display() {
        for(int i=0;i<v.size();i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    cout << st.top() << endl;
    cout << st.size() << endl;
}