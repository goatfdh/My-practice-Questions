#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;         // The data part
    Node* next;       // Pointer to the next node

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr; // Initially, the next is null
    }
};

int main() {
    // Create the first node
    Node* head = new Node(10); // Head points to the first node with value 10

    // Create another node
    head->next = new Node(20); // Second node with value 20

    // Create a third node
    head->next->next = new Node(30); // Third node with value 30

    // Traverse and print the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl; // End of the list

    return 0;
}
