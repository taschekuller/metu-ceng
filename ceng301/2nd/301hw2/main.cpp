#include <iostream>
#include "List.h"

int main() {
    // Create a linked list and perform operations
    List myList;

    //Items appended
    myList.appendItem(10);
    myList.appendItem(20);
    myList.appendItem(30);

    // Print the size of the linked list
    std::cout << "10, 20 and 30 appended to the list! " << std::endl;
    std::cout << "Size: " << myList.getSize() << std::endl;
    std::cout << "----------------------- " << std::endl;

    myList.displayList();

    //Removed item n^th index
    myList.removeAt(1); // Remove the second item (index 1)
    std::cout << "Removed item in index 1: " << myList.getSize() << std::endl;
    std::cout << "----------------------- " << std::endl;
    myList.displayList();

    //Inserted item n^th index
    myList.insertAt(1, 25); // Insert 25 at index 1
    std::cout << "Inserted 25 as an item in index 1: " << myList.getSize() << std::endl;
    std::cout << "----------------------- " << std::endl;
    myList.displayList();

    // --> File functions START HERE
    // Save the linked list to a file
    myList.toFile("output.txt");
    std::cout << "Saved linked list to a file named output.txt " << myList.getSize() << std::endl;
    std::cout << "----------------------- " << std::endl;
    // Read the linked list from the file
    myList.fromFile("input.txt");
    std::cout << "Read linked list from a file named input.txt " << myList.getSize() << std::endl;
    std::cout << "----------------------- " << std::endl;
    // Printing the list to file named fName in reverse row
    myList.toFileR("reversedOutput.txt");
    std::cout << "----------------------- " << std::endl;
    std::cout << "Read linked list from a file named input.txt and saved it reversedOutput.txt in reversed order " << myList.getSize() << std::endl;


    // Remove odd numbers from the list
    myList.removeOdds();
    std::cout << "Removed odds from linked list" << myList.getSize() << std::endl;
    std::cout << "----------------------- " << std::endl;
    myList.displayList();




    // Check if the list is in ascending order
     if (myList.isAscending()) {
        std::cout << "The list is in ascending order." << std::endl;
    } else {
        std::cout << "The list is not in ascending order." << std::endl;
    }

    // Duplicate each node three(n) times
    myList.growNodeByNode(3);
    std::cout << "Linked list grown node by node n:3 " << myList.getSize() << std::endl;
    std::cout << "----------------------- " << std::endl;
    myList.displayList();

    //Converts num input into linkedList version
    myList.numToList(2542); // Assuming myList is initially 2->5->4->2
    std::cout << "Linked list created from numToList func." << std::endl;
    std::cout << "----------------------- " << std::endl;
    myList.displayList();

    // LinkedList grown by itself
    myList.grow2();
    std::cout << "Linked list grown by itself." << std::endl;
    std::cout << "----------------------- " << std::endl;
    myList.displayList();









    return 0;
}
