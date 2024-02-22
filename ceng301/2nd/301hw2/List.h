#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include <vector>

class List {
private:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* dummyHead;
public:
    List();
    ~List();
    void displayList();
    void appendItem(int item);
    int getSize();
    void removeAt(int index);
    void insertAt(int index, int item);
    void toFile(const char* fName);
    void fromFile(const char* fName);
    void toFileR(const char* fName);
    void removeOdds();
    bool isAscending();
    void grow2();
    void growNodeByNode(int n);
    void numToList(int num);
    void reverseList();
};

#endif