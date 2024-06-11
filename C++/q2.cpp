#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int key) : key(key), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root;
    BST() : root(nullptr) {}

    void insert(int key) {
        root = insertRec(root, key);
    }

    void postorder() {
        postorderRec(root);
        cout << endl;
    }

private:
    Node* insertRec(Node* root, int key) {
        if (root == nullptr) {
            return new Node(key);
        }
        if (key < root->key) {
            root->left = insertRec(root->left, key);
        } else if (key > root->key) {
            root->right = insertRec(root->right, key);
        }
        return root;
    }

    void postorderRec(Node* root) {
        if (root == nullptr) {
            return;
        }
       
        postorderRec(root->left);
        postorderRec(root->right);
        cout<<root->key<<" ";
        
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    tree.postorder(); 

    return 0;
}

// Expected Output:
// Should print 20 40 30 60 80 70 50