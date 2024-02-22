#include "List.h"
#include <iostream>
#include <fstream>

List::List() {
    dummyHead = new Node(0);
}

List::~List() {
    // Destructor: Clean up memory by deleting all nodes
    Node* current = dummyHead;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void List::displayList() {
    Node* current = dummyHead;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void List::appendItem(int item) {
    // Appends a new node with item to the end of the list
    Node* newNode = new Node(item);
    if (dummyHead == nullptr) {
        dummyHead = newNode;
    } else {
        Node* current = dummyHead;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int List::getSize() {
    // Returns the size of the linked list
    int size = 0;
    Node* current = dummyHead;
    while (current != nullptr) {
        size++;
        current = current->next;
    }
    return size;
}

void List::removeAt(int index) {
    // Removes the node at the specified index
    if (index < 0 || dummyHead == nullptr) {
        return; // Invalid index or empty list
    }
    if (index == 0) {
        Node* temp = dummyHead;
        dummyHead = dummyHead->next;
        delete temp;
        return;
    }
    int currentIndex = 0;
    Node* current = dummyHead;
    while (current->next != nullptr && currentIndex < index - 1) {
        current = current->next;
        currentIndex++;
    }
    if (currentIndex == index - 1 && current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void List::insertAt(int index, int item) {
    // Inserts a node with element item after the index-th node
    if (index < 0) {
        return; // Invalid index
    }
    Node* newNode = new Node(item);
    if (index == 0) {
        newNode->next = dummyHead;
        dummyHead = newNode;
        return;
    }
    int currentIndex = 0;
    Node* current = dummyHead;
    while (current != nullptr && currentIndex < index - 1) {
        current = current->next;
        currentIndex++;
    }
    if (currentIndex == index - 1) {
        newNode->next = current->next;
        current->next = newNode;
    }
}

void List::toFile(const char* fName) {
    // Prints the elements of the linked list to the file named fName
    std::ofstream outputFile(fName);
    Node* current = dummyHead;
    while (current != nullptr) {
        outputFile << current->data << "\n";
        current = current->next;
    }
    outputFile.close();
}

void List::fromFile(const char* fName) {
    // Creates a linked list by reading from a file (element per row)
    std::ifstream inputFile(fName);
    if (!inputFile.is_open()) {
        return; // Unable to open the file
    }
    // Clear the current list
    Node* current = dummyHead;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    dummyHead = nullptr;

    int item;
    while (inputFile >> item) {
        appendItem(item);
    }
    inputFile.close();
}

/* void List::toFileR(const char* fName){
    // Creates a linked list by reading from a file (element per row)
    std::ofstream outputFile(fName);
    if (!outputFile.is_open()) {
        return; // Unable to open the file
    }
    // Clear the current list

    if (dummyHead == nullptr || dummyHead->next == nullptr) {
        // The list is empty or has only one element, no need to reverse
        return;
    }

    Node* prev = nullptr;
    Node* current = dummyHead;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Save the next node
        current->next = prev; // Reverse the link
        prev = current;       // Move to the next nodes
        outputFile << current->data << "\n";
        current = next;
    }
    outputFile.close();
}
*/

void List::toFileR(const char* fName) {
    // Reverse the linked list
    reverseList();

    // Prints the elements of the reversed linked list to the file named fName
    std::ofstream outputFile(fName);
    if (!outputFile.is_open()) {
        return; // Unable to open the file
    }

    // Traverse the reversed list and print to the file
    Node* current = dummyHead;
    while (current != nullptr) {
        outputFile << current->data << "\n";
        current = current->next;
    }

    // Reverse the list back to its original order
    reverseList();

    outputFile.close();
}

void List::removeOdds() {
    // Removes all nodes whose elements are odd numbers
    Node* current = dummyHead;
    Node* prev = nullptr;
    while (current != nullptr) {
        if (current->data % 2 != 0) {
            if (prev == nullptr) {
                dummyHead = current->next;
            } else {
                prev->next = current->next;
            }
            Node* temp = current;
            current = current->next;
            delete temp;
        } else {
            prev = current;
            current = current->next;
        }
    }
}

bool List::isAscending() {
    // Returns true if the next element is always bigger than the current one
    Node* current = dummyHead;
    while (current != nullptr && current->next != nullptr) {
        if (current->data > current->next->data) {
            return false;
        }
        current = current->next;
    }
    return true;
}

void List::grow2() {
    if (dummyHead == nullptr) {
        // The list is empty, nothing to grow
        return;
    }

    // Create a copy of the current list
    List copyList;
    Node* originalCurrent = dummyHead;

    while (originalCurrent != nullptr) {
        copyList.appendItem(originalCurrent->data);
        originalCurrent = originalCurrent->next;
    }

    // Append the copy of the list to the end of the original list
    Node* copyCurrent = copyList.dummyHead;

    while (copyCurrent != nullptr) {
        appendItem(copyCurrent->data);
        copyCurrent = copyCurrent->next;
    }
}

void List::growNodeByNode(int n) {
    // Grows the list by duplicating each node n times
    if (n < 2) {
        return; // No need to duplicate less than 2 times
    }
    Node* current = dummyHead;
    while (current != nullptr) {
        for (int i = 1; i < n; i++) {
            Node* newNode = new Node(current->data);
            newNode->next = current->next;
            current->next = newNode;
            current = newNode; // Update current to the newly added node
        }
        current = current->next; // Move to the next original node
    }
}

void List::numToList(int num) {
    // Makes the current list empty and then fills it up with the digits of num
    while (dummyHead != nullptr) {
        Node* temp = dummyHead;
        dummyHead = dummyHead->next;
        delete temp;
    }
    dummyHead = nullptr;

    if (num == 0) {
        appendItem(0);
    } else {
        while (num > 0) {
            int digit = num % 10;
            appendItem(digit);
            num /= 10;
        }

        reverseList(); // Reverse the list after appending all digits
    }
}

void List::reverseList() {
    if (dummyHead == nullptr || dummyHead->next == nullptr) {
        // The list is empty or has only one element, no need to reverse
        return;
    }

    Node* prev = nullptr;
    Node* current = dummyHead;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Save the next node
        current->next = prev; // Reverse the link
        prev = current;       // Move to the next nodes
        current = next;
    }

    dummyHead = prev; // Update the head of the list to the new first node (previous last node)
}