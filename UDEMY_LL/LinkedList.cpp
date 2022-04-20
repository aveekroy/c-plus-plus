#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL; // This gets created in stack of the memory, not the heap

// Query : What is the difference between 'Node *head=NULL;' and 'Node *head;'

void create(int A[], int n)
{
    Node *t, *last;  // last is just declared here (no new node has been created)
    head = new Node; // This gets created in heap of the memory, not the stack
    head->data = A[0];
    head->next = NULL;
    last = head; // last is assigned first, no new node is created.
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " --> ";
        p = p->next;
    }
}
void RDisplay(Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        cout << p->data << " --> ";
    }
}
int main()
{

    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    Display(head);
    return 0;
}