namespace geneprog {

template <typename T>
class Node {
public:
    Node(int key, T value);
    Node(int key, T value, Node* leftChild, Node* rightChild);

    int getKey();
    T getValue();
    Node* getLeftChild();
    Node* getRightChild();

    void setKey(int key);
    void setValue(T value);
    void setLeftChild(Node* leftChild);
    void setRightChild(Node* rightChild);

private:
    int key;
    T value;
    Node* leftChild;
    Node* rightChild;
};


}
