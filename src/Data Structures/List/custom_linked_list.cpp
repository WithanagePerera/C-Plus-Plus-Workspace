// Linear data structure
// Elements aren't stored in contiguous memory locations
// Elements are linked using pointers

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printList(Node* n)
{
    while (n != nullptr)
    {
        cout << n->data << " ";
        n = n-> next;
    }
}

int main()
{
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;
    // If third is assigned to head, it would create a circle
    // Attempting to traverse would result in an infinite loop

    printList(head);
}