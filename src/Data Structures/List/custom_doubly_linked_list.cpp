#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *previous;
};

void printList(Node* n, bool direction)
{
    if (direction)
    {
        while (n != nullptr)
        {
            cout << n->data << " ";
            n = n-> next;
        }
    }
    else
    {
        while (n != nullptr)
        {
            cout << n->data << " ";
            n = n-> previous;
        }
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
    head->previous = nullptr;

    second->data = 2;
    second->next = third;
    second->previous = head;

    third->data = 3;
    third->next = nullptr;
    third->previous = second;

    cout << "Printing in forward order:" << endl;
    printList(head, true);

    cout << "\n\n";

    cout << "Printing in reverse order:" << endl;
    printList(third, false);
}