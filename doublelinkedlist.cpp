#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void dllfront(struct Node **head, int new_data)
{
    struct Node *newNode = new Node;

    newNode->data = new_data;
    newNode->next = (*head);
    newNode->prev = NULL;

    if ((*head) != NULL)
        (*head)->prev = newNode;
    (*head) = newNode;
}

void dllback(struct Node **head, int new_data)
{
    struct Node *newNode = new Node;
    struct Node *last = *head;

    newNode->data = new_data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }
}

void displayList(struct Node *node)
{
    struct Node *last;

    while (node != NULL)
    {
        cout << node->data << "<==>";
        last = node;
        node = node->next;
    }
    if (node == NULL)
        cout << "NULL";
}

int main()
{
    struct Node *head = NULL;

    dllback(&head, 40);

    dllfront(&head, 30);

    dllfront(&head, 20);

    dllfront(&head, 10);

    dllback(&head, 50);

    cout << "Doubly linked list is as follows: " << endl;
    displayList(head);
    return 0;
}
