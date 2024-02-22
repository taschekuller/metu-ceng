#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cmath>

#include "Node.h"
#include "NoSuchItemException.h"

enum TraversalMethod {preorder, inorder, postorder};

template<class T>
class ScapegoatTree {
public: // DO NOT CHANGE THIS PART.
    ScapegoatTree();

    ScapegoatTree(const ScapegoatTree<T> &obj);

    ~ScapegoatTree();

    bool isEmpty() const;

    int getHeight() const;

    int getSize() const;

    bool insert(const T &element);

    bool remove(const T &element);

    void removeAllNodes();

    const T &get(const T &element) const;

    void print(TraversalMethod tp=inorder) const;

    void printPretty() const;

    ScapegoatTree<T> &operator=(const ScapegoatTree<T> &rhs);

    void balance();

    const T &getCeiling(const T &element) const;

    const T &getFloor(const T &element) const;

    const T &getMin() const;

    const T &getMax() const;

    const T &getNext(const T &element) const;

private: // YOU MAY ADD YOUR OWN UTILITY MEMBER FUNCTIONS HERE.

    void print(Node<T> *node, TraversalMethod tp) const;
    void printPretty(Node<T> *node, int indentLevel, bool isLeftChild) const;
    Node<T>* copyTree(Node<T>* node) const;
    void destroyTree(Node<T>* node);
    int calculateHeight(Node<T>* node) const;
    int calculateSize(Node<T>* node) const;
    void traverseInOrder(Node<T>* node, T* elements, int& index) const;
    Node<T>* buildBalancedTree(T* elements, int start, int end);
    Node<T>* findMin(Node<T>* node) const;
    bool removeElement(Node<T>*& node, Node<T>* parent, const T &element);
    void removeAllNodes(Node<T>*& node);
    bool insertHelper(Node<T>*& current, Node<T>* newNode);
    bool isBalanced(Node<T>* node) const;





private: // DO NOT CHANGE THIS PART.
    Node<T> *root;

    int upperBound;
};

#endif //TREE_H

template<class T>
ScapegoatTree<T>::ScapegoatTree() {
    root = nullptr;
    upperBound = 0;
}

template<class T>
ScapegoatTree<T>::ScapegoatTree(const ScapegoatTree<T> &obj) {
    root = copyTree(obj.root);
    upperBound = obj.upperBound;
}

template<class T>
Node<T>* ScapegoatTree<T>::copyTree(Node<T>* node) const {
    if (node == nullptr) {
        return nullptr;
    }

    Node<T>* newNode = new Node<T>(node->element, copyTree(node->left), copyTree(node->right));
    return newNode;
}

template<class T>
ScapegoatTree<T>::~ScapegoatTree() {
    destroyTree(root);

}

template<class T>
void ScapegoatTree<T>::destroyTree(Node<T>* node) {
    if (node == nullptr) {
        return;
    }

    destroyTree(node->left);
    destroyTree(node->right);
    delete node;
}

template<class T>
bool ScapegoatTree<T>::isEmpty() const {
  return root == nullptr;
}

template<class T>
int ScapegoatTree<T>::getHeight() const {
   return calculateHeight(root);
}

template<class T>
int ScapegoatTree<T>::calculateHeight(Node<T>* node) const {
    if (node == nullptr) {
        return 0;
    }

    int leftHeight = calculateHeight(node->left);
    int rightHeight = calculateHeight(node->right);

    return 1 + std::max(leftHeight, rightHeight);
}

template<class T>
int ScapegoatTree<T>::getSize() const {
    return calculateSize(root);
}

template<class T>
int ScapegoatTree<T>::calculateSize(Node<T>* node) const {
    if (node == nullptr) {
        return 0;
    }

    int leftSize = calculateSize(node->left);
    int rightSize = calculateSize(node->right);

    return 1 + leftSize + rightSize;
}


template<class T>
bool ScapegoatTree<T>::insertHelper(Node<T>*& current, Node<T>* newNode) {
    if (current == nullptr) {
        current = newNode;
        return true;
    }

    if (newNode->element < current->element) {
        return insertHelper(current->left, newNode);
    } else if (newNode->element > current->element) {
        return insertHelper(current->right, newNode);
    } else {
        return false;  
    }
}

template<class T>
bool ScapegoatTree<T>::insert(const T &element) {
    Node<T>* newNode = new Node<T>(element, nullptr, nullptr);

    if (isEmpty()) {
        root = newNode;
        upperBound = 1;
        return true;
    }

    bool inserted = insertHelper(root, newNode);

    if (inserted) {
        upperBound++;

        if (!isBalanced(root)) {
            balance();
        }
    } else {
        delete newNode;
    }

    return inserted;
}


template<class T>
bool ScapegoatTree<T>::remove(const T &element) {
    if (isEmpty()) {
        return false;
    }

    if (removeElement(root, nullptr, element)) {
        upperBound--;

        if (!isBalanced(root)) {
            balance();
        }

        return true;
    }

    return false;
}

template<class T>
bool ScapegoatTree<T>::removeElement(Node<T>*& node, Node<T>* parent, const T &element) {
    if (node == nullptr) {
        return false;
    }

    if (element < node->element) {
        return removeElement(node->left, node, element);
    } else if (element > node->element) {
        return removeElement(node->right, node, element);
    } else {

        if (node->left == nullptr && node->right == nullptr) {
            // Case 1: Node is a leaf
            delete node;
            node = nullptr;
        } else if (node->left == nullptr) {
            // Case 2: Node has only right child
            Node<T>* temp = node;
            node = node->right;
            delete temp;
        } else if (node->right == nullptr) {
            // Case 3: Node has only left child
            Node<T>* temp = node;
            node = node->left;
            delete temp;
        } else {
            // Case 4: Node has both left and right children
            Node<T>* successor = findMin(node->right);
            node->element = successor->element;
            removeElement(node->right, node, successor->element);
        }

        return true;
    }
}

template<class T>
Node<T>* ScapegoatTree<T>::findMin(Node<T>* node) const {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}


template<class T>
void ScapegoatTree<T>::removeAllNodes() {
    removeAllNodes(root);
    upperBound = 0; 
}

template<class T>
void ScapegoatTree<T>::removeAllNodes(Node<T>*& node) {
    if (node != nullptr) {
        removeAllNodes(node->left);
        removeAllNodes(node->right);
        delete node;
        node = nullptr;
    }
}

template<class T>
const T &ScapegoatTree<T>::get(const T &element) const {
    Node<T>* currentNode = root;

    while (currentNode != nullptr) {
        if (element < currentNode->element) {
            currentNode = currentNode->left;
        } else if (currentNode->element < element) {
            currentNode = currentNode->right;
        } else {
            return currentNode->element;
        }
    }
    return -1;

}



template<class T>
ScapegoatTree<T> &ScapegoatTree<T>::operator=(const ScapegoatTree<T> &rhs) {
    if (this != &rhs) {
        removeAllNodes(root);

        root = copyTree(rhs.root);

        upperBound = rhs.upperBound;
    }

    return *this;
}


template<class T>
void ScapegoatTree<T>::balance() {
    T* elements = new T[upperBound];
    int index = 0;
    traverseInOrder(root, elements, index);

    root = buildBalancedTree(elements, 0, upperBound - 1);

    delete[] elements;

}

template<class T>
bool ScapegoatTree<T>::isBalanced(Node<T>* node) const {
    if (node == nullptr) {
        return true; 
    }

    int leftHeight = calculateHeight(node->left);
    int rightHeight = calculateHeight(node->right);
    int numberOfNodes = calculateSize(node);

    double log3_2_upperBound = log(upperBound) / log(3.0 / 2);

    if (upperBound / 2 <= numberOfNodes && numberOfNodes <= upperBound && 
        std::abs(leftHeight - rightHeight) <= 1 &&
        leftHeight <= log3_2_upperBound &&
        rightHeight <= log3_2_upperBound &&
        isBalanced(node->left) &&
        isBalanced(node->right)) {
        return true;
    }

    return false;
}

template<class T>
void ScapegoatTree<T>::traverseInOrder(Node<T>* node, T* elements, int& index) const {
    if (node != nullptr) {
        traverseInOrder(node->left, elements, index);
        elements[index++] = node->element;
        traverseInOrder(node->right, elements, index);
    }
}

template<class T>
Node<T>* ScapegoatTree<T>::buildBalancedTree(T* elements, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int mid = start + (end - start) / 2;
    Node<T>* newNode = new Node<T>(elements[mid], nullptr, nullptr);

    newNode->left = buildBalancedTree(elements, start, mid - 1);
    newNode->right = buildBalancedTree(elements, mid + 1, end);

    return newNode;
}


template<class T>
const T &ScapegoatTree<T>::getCeiling(const T &element) const {
    Node<T>* currentNode = root;
    Node<T>* ceilingNode = nullptr;

    while (currentNode != nullptr) {
        if (currentNode->element >= element) {
            ceilingNode = currentNode;
            currentNode = currentNode->left;
        } else {
            currentNode = currentNode->right;
        }
    }

    if (ceilingNode == nullptr) {
    }

    return ceilingNode->element;
}

template<class T>
const T &ScapegoatTree<T>::getFloor(const T &element) const {
    Node<T>* currentNode = root;
    Node<T>* floorNode = nullptr;

    while (currentNode != nullptr) {
        if (currentNode->element <= element) {
            floorNode = currentNode;
            currentNode = currentNode->right;
        } else {
            currentNode = currentNode->left;
        }
    }

    if (floorNode == nullptr) {
    }

    return floorNode->element;
}


template<class T>
const T &ScapegoatTree<T>::getMin() const {
     if (isEmpty()) {
        // throw NoSuchItemException("Tree is empty. Cannot get the minimum element.");
    }

    Node<T>* minNode = findMin(root);
    return minNode->element;
}



template<class T>
const T &ScapegoatTree<T>::getMax() const {
    if (isEmpty()) {
    }

    Node<T>* maxNode = root;
    while (maxNode->right != nullptr) {
        maxNode = maxNode->right;
    }

    return maxNode->element;
}



template<class T>
const T &ScapegoatTree<T>::getNext(const T &element) const {
       if (isEmpty()) {
    }

    Node<T>* currentNode = root;
    Node<T>* successor = nullptr;

    while (currentNode != nullptr) {
        if (element < currentNode->element) {
            successor = currentNode;
            currentNode = currentNode->left;
        } else if (element > currentNode->element) {
            currentNode = currentNode->right;
        } else {
            if (currentNode->right != nullptr) {
                successor = findMin(currentNode->right);
            }
            break;
        }
    }

    if (successor == nullptr) {
    }

    return successor->element;
}


//FUNCTIONS BELOW ARE IMPLEMENTED FOR YOU

template<class T>
void ScapegoatTree<T>::print(TraversalMethod tp) const { //DO NOT CHANGE THIS PART

    if (tp == preorder) {
        if (isEmpty()) {
            std::cout << "BST_preorder{}" << std::endl;
            return;
        }
        
        std::cout << "BST_preorder{" << std::endl;  
        print(root, tp);
        std::cout << std::endl << "}" << std::endl;


    } else if (tp == inorder) {
        if (isEmpty()) {
            std::cout << "BST_inorder{}" << std::endl;
            return;
        }

        std::cout << "BST_inorder{" << std::endl;
        print(root, tp);
        std::cout << std::endl << "}" << std::endl;
    } else if (tp == postorder) {
        if (isEmpty()) {
            std::cout << "BST_postorder{}" << std::endl;
            return;
        }
        
        std::cout << "BST_postorder{" << std::endl;
        print(root, tp);
        std::cout << std::endl << "}" << std::endl;
    }
}

template<class T>
void ScapegoatTree<T>::print(Node<T> *node, TraversalMethod tp) const { //DO NOT CHANGE THIS PART

    if (tp == preorder) {
        if(node == NULL) return;
        std::cout << "\t" << node->element;

        if (node->left) {
            std::cout << "," << std::endl;
        }
        print(node -> left, preorder);
        
        if(node->right)
        {
            std::cout << "," << std::endl;
        }
        print(node -> right, preorder);

    } else if (tp == inorder) {
        if (node == NULL)
            return;

        print(node->left, inorder);
        if (node->left) {
            std::cout << "," << std::endl;
        }

        std::cout << "\t" << node->element;

        if (node->right) {
            std::cout << "," << std::endl;
        }
        print(node->right, inorder);
    } else if (tp == postorder) {
        if(node == NULL) return;

        print(node -> left, postorder);
        if(node -> left)
        {
            std::cout << "," << std::endl;
        }
        print(node -> right, postorder);
        
        if(node -> right)
        {
        std::cout << "," << std::endl;
        }

        std::cout << "\t" << node->element;
    }
}

template<class T>
void ScapegoatTree<T>::printPretty() const { //DO NOT CHANGE THIS PART
    if (isEmpty()) {
        std::cout << "BST_pretty{}" << std::endl;
        return;
    }

    std::cout << "BST_pretty{" << std::endl;
    printPretty(root, 0, false);
    std::cout << "}" << std::endl;

}

template<class T>
void ScapegoatTree<T>::printPretty(Node<T> *node, int indentLevel, bool isLeftChild) const { //DO NOT CHANGE THIS PART
    if (node == NULL)
        return;

    std::cout << "\t";
    for (int i = 0; i < indentLevel; ++i) {
        std::cout << "---";
    }
    std::cout << (indentLevel == 0 ? "root:" : (isLeftChild ? "l:" : "r:")) << node->element << std::endl;

    printPretty(node->left, indentLevel + 1, true);

    printPretty(node->right, indentLevel + 1, false);
}
