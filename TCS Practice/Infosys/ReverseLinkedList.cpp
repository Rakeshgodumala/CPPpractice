// Node* reverse(Node* head) {

//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = NULL;

//     while(curr != NULL) {

//         next = curr->next;

//         curr->next = prev;

//         prev = curr;

//         curr = next;
//     }

//     return prev;
// }











// Problem Statement

// Given the head of a singly linked list, reverse the linked list and return the new head.

// Example
// Input
// 1 -> 2 -> 3 -> 4 -> 5 -> NULL
// Output
// 5 -> 4 -> 3 -> 2 -> 1 -> NULL










#include <iostream>
using namespace std;

// Step 1: Create Node structure
class Node {

public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Step 2: Reverse Function
Node* reverse(Node* head) {

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL) {

        // Store next node
        next = curr->next;

        // Reverse current node link
        curr->next = prev;

        // Move prev forward
        prev = curr;

        // Move curr forward
        curr = next;
    }

    // New head
    return prev;
}

// Step 3: Print Linked List
void printList(Node* head) {

    while(head != NULL) {

        cout << head->data << " -> ";

        head = head->next;
    }

    cout << "NULL";
}

// Main Function
int main() {

    // Creating linked list manually

    Node* head = new Node(1);

    head->next = new Node(2);

    head->next->next = new Node(3);

    head->next->next->next = new Node(4);

    head->next->next->next->next = new Node(5);

    cout << "Original Linked List:\n";

    printList(head);

    // Reverse linked list
    head = reverse(head);

    cout << "\n\nReversed Linked List:\n";

    printList(head);

    return 0;
}