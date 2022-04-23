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

void Delete(Node *p, int index)
{

    Node *d = head;
    Node *q;
    if (index < 0 || index > count(p))
        return;

    // When a node needs to be deleted at the beginning
    if (index == 0)
    {
        head = head->next;
        delete d;
    }
    // When a node needs to be inserted in between two nodes or at the last
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }
}

void DeleteDuplicates(Node *p)
{

    Node *q = p->next;

    while (q != nullptr)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{

    int A[] = {10, 20, 20, 30, 40, 50, 50};
    create(A, 7);
    Display(head);
    cout << endl;

    DeleteDuplicates(head);
    Display(head);
    cout << endl;

    Delete(head, 0);
    Display(head);
    cout << endl;

    Delete(head, 0);
    Display(head);
    cout << endl;

    Delete(head, 2);
    Display(head);
    cout << endl;

    return 0;
}