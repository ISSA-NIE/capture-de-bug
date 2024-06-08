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
        if (root = nullptr) {
            return new Node(key);
        }
        if (key < root->key) {
            root->left = insertRec(root->right, key);
        } else if (key > root->key) {
            root->right = insertRec(root->left, key);
        }
        return root;
    }

    void postorderRec(Node* root) {
        if (root != nullptr) {
            postorderRec(root->right);
            postorderRec(root->left);
            cout << root->key << " ";
        }
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