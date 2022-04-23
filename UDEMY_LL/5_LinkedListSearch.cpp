#include <iostream>
using namespace std;

#define endline cout << endl;

struct Node
{
    int data;
    struct Node *next;
};

Node *head = NULL;

void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}

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

bool LinearSearch(Node *p, int key)
{

    while (p)
    {
        if (key == p->data)
        {
            cout << "Value is present in the linked list" << endl;
            return true;
        }
        p = p->next;
    }
    cout << "Value is not present in the linked list" << endl;
    return false;
}

// Improving Search by bringing in the key at HEAD
bool ImproveSearch(Node *p, int key)
{
    Node *q = NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = head;
            head = p;
            cout << "Value is present in the linked list" << endl;
            return true;
        }
        q = p;
        p = p->next;
    }
    cout << "Value is not present in the linked list" << endl;
    return false;
}

Node *RSearch(Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RSearch(p->next, key);
}

int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, sizeof(A) / sizeof(int));
    cout << "Linked List: " << endl;
    Display(head);
    endline;
    cout << "Searching...: " << LinearSearch(head, 25) << endl;
    endline;
    cout << "Searching...: " << ImproveSearch(head, 2) << endl;
    Display(head);

    return 0;
}