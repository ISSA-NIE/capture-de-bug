class Node:
    def _init_(self, key):
        self.key = key
        self.left = None
        self.right = None

class BST:
    def _init_(self):
        self.root = None

    def insert(self, key):
        if self.root is None:
            self.root = Node(key)
        else:
            self._insert(self.root, key)

    def _insert(self, root, key):
        if key < root.key:
            if root.left is None:
                root.left = Node(key)
        else:
            self._insert(root.right, key)
        else:
            if root.right is None:
                root.right = Node(key)
            else:
                self._insert(root.left, key)

    def postorder(self):
        self._postorder(self.root)
        print()

    def _postorder(self, root):
        if root:
            self._postorder(root.right)
            self._postorder(root.left)
            print(root.key, end=' ')

tree = BST()
tree.insert(50)
tree.insert(30)
tree.insert(20)
tree.insert(40)
tree.insert(70)
tree.insert(60)
tree.insert(80)

tree.postorder()  