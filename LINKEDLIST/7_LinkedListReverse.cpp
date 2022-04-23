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

void Reverse1(Node *p, int size)
{
    int *A = new int[size];
    int i = 0;
    Node *q = p;

    // Copying all the linked list values to the array A
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    // Copying back the values of Array A back to the linked list
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

// Using Sliding Pointers
void Reverse2(Node *p)
{

    Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}

// Using Recursive function
void Reverse3(Node *q, Node *p)
{
    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
    {
        head = q;
    }
}

int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Display(head);
    cout << endl;

    Reverse1(head, 5);
    Display(head);
    cout << endl;

    Reverse2(head);
    Display(head);
    cout << endl;

    Reverse3(NULL, head);
    Display(head);
    cout << endl;

    return 0;
}