#include "Node.h"

namespace geneprog {

template <typename T>
Node::Node(int key, T value) {
    key = key;
    value = value;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <typename T>
Node::Node(int key, T value, Node* leftChild, Node* rightChild) {
    key = key;
    value = value;
    leftChild = leftChild;
    rightChild = rightChild;
}

int Node::getKey() {return key;}

template <typename T>
T Node::getValue() {return value;}

Node* Node::getLeftChild() {return leftChild;}
Node* Node::getRightChild() {return rightChild;}

void Node::setKey(int key) {key = key;}

template <typename T>
void Node::setValue(T value) {value = value;}

void Node::setLeftChild(*Node newNode) {if (*leftChild == nullptr) leftChild = newNode;}
void Node::setRightChild(*Node newNode) {if (*rightChild == nullptr) rightChild = newNode;}
}
