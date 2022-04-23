#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *head1 = NULL;
Node *head2 = NULL;
Node *headMerge = NULL;

// Creating a linked list from an array
void create1(int arr[], int length)
{
    Node *t, *last;
    head1 = new Node;
    head1->data = arr[0];
    head1->next = NULL;
    last = head1;
    for (int i = 1; i < length; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Creating a linked list from an array
void create2(int arr[], int length)
{
    Node *t, *last;
    head2 = new Node;
    head2->data = arr[0];
    head2->next = NULL;
    last = head2;
    for (int i = 1; i < length; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void mergeLL(Node *p, Node *q)
{
    Node *last;
    if (p->data < q->data)
    {
        headMerge = p;
        last = p;
        p = p->next;
        headMerge->next = NULL;
    }
    else
    {
        headMerge = q;
        last = q;
        q = q->next;
        headMerge->next = NULL;
    }

    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
    {
        last->next = p;
    }
    if (q)
    {
        last->next = q;
    }
}

int main()
{

    int A[] = {1, 4, 11, 12, 16};
    int B[] = {2, 3, 10, 14, 15};
    create1(A, 5);
    create2(B, 5);
    Display(head1);
    cout << endl;
    Display(head2);
    cout << endl;

    cout << "Merging 2 linked lists:" << endl;
    mergeLL(head1, head2);
    Display(headMerge);

    return 0;
}