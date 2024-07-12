#include <iostream> 
#include <unordered_map> 
using namespace std;


class Node {
    public :
        char data;
        bool terminal;
        unordered_map<char,Node*> children;
        int countWordsStarting;
        int countWordsEnding;
        Node(char data) {
            this->data = data;
            this->terminal = false;
            this->countWordsStarting = 0;
            this->countWordsEnding = 0;
        }
};

class Trie{

    public:
    Node* root;
    Trie(){
        root = new Node('\0');
    }

    void insert(string &word){
        Node* curr = root;
        for(int i=0;i<word.size();i++) {
            char ch = word[i];
            if(curr->children.count(ch)) {
                curr = curr->children[ch];
                curr->countWordsStarting++;
            }
            else {
                Node* child = new Node(ch);
                curr->children[ch] = child;
                curr = curr->children[ch];
                curr->countWordsStarting++;
            }
        }
        curr->terminal=true;
        curr->countWordsEnding++;
    }

    int countWordsEqualTo(string &word){
        Node* curr = root;
        for(int i=0;i<word.size();i++) {
            char ch = word[i];
            if(curr->children.count(ch)) {
                curr = curr->children[ch];
            }
            else return 0;
        }
        return curr->countWordsEnding;
    }

    int countWordsStartingWith(string &word){
        Node* curr = root;
        for(int i=0;i<word.size();i++) {
            char ch = word[i];
            if(curr->children.count(ch)) {
                curr = curr->children[ch];
            }
            else return 0;
        }
        return curr->countWordsStarting;
    }

    void erase(string &word){
        Node* curr = root;
        for(int i=0;i<word.size();i++) {
            char ch = word[i];
            curr = curr->children[ch];
            curr->countWordsStarting--;
        }
        curr->countWordsEnding--;
    }
};
int main() {
    
}
