#include "Node.h"

namespace GP {

template <typename T>
class SyntaxTree {
public:
    SyntaxTree(Node* root);
    void traverse(int key);
    void insertNode(T value, int key);
    void deleteNode(int key);
    Node* search(int key);

private:
    Node* root;
    Node* currentNode;
};

}
