#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *head1 = NULL;
Node *head2 = NULL;
Node *headConcat = NULL;

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

void concatLL(Node *p, Node *q)
{
    headConcat = p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
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

    cout << "Concanating 2 linked lists:" << endl;
    concatLL(head1, head2);
    Display(headConcat);
    cout << endl;

    return 0;
}