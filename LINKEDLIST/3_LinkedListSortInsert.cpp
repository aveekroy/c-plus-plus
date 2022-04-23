#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *head = NULL;

// Creating a linked list from an array
void create(int A[], int length)
{
    Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;
    for (int i = 1; i < length; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int count(Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void InsertSortedLL(Node *p, int value)
{
    Node *q, *tmp;

    while (p != NULL && p->data < value)
    {

        q = p;
        p = p->next;
    }
    tmp = new Node;
    tmp->data = value;
    tmp->next = q->next;
    q->next = tmp;
}

int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Display(head);
    cout << endl;

    InsertSortedLL(head, 35);
    Display(head);
    cout << endl;

    InsertSortedLL(head, 55);
    Display(head);
    cout << endl;

    InsertSortedLL(head, 28);
    Display(head);
    cout << endl;

    return 0;
}