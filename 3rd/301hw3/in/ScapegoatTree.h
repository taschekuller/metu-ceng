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

private: // DO NOT CHANGE THIS PART.
    Node<T> *root;

    int upperBound;
};

#endif //TREE_H

template<class T>
ScapegoatTree<T>::ScapegoatTree() {
   
}

template<class T>
ScapegoatTree<T>::ScapegoatTree(const ScapegoatTree<T> &obj) {
   
}

template<class T>
ScapegoatTree<T>::~ScapegoatTree() {
 
}

template<class T>
bool ScapegoatTree<T>::isEmpty() const {
  
}

template<class T>
int ScapegoatTree<T>::getHeight() const {
   
}

template<class T>
int ScapegoatTree<T>::getSize() const {
  
}

template<class T>
bool ScapegoatTree<T>::insert(const T &element) {

}


template<class T>
bool ScapegoatTree<T>::remove(const T &element) {
   
}



template<class T>
void ScapegoatTree<T>::removeAllNodes() {
 
}

template<class T>
const T &ScapegoatTree<T>::get(const T &element) const {
  
}



template<class T>
ScapegoatTree<T> &ScapegoatTree<T>::operator=(const ScapegoatTree<T> &rhs) {
    
}

template<class T>
void ScapegoatTree<T>::balance() {
    
}


template<class T>
const T &ScapegoatTree<T>::getCeiling(const T &element) const {

}

template<class T>
const T &ScapegoatTree<T>::getFloor(const T &element) const {
  
}


template<class T>
const T &ScapegoatTree<T>::getMin() const {

}



template<class T>
const T &ScapegoatTree<T>::getMax() const {

}



template<class T>
const T &ScapegoatTree<T>::getNext(const T &element) const {
   
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