#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

// Query : What is the difference between 'Node *head=NULL;' and 'Node *head;' - are they same?

// See detailed explanation on Notes (Notability-C and C++)
void create(int A[], int length)
{
    Node *a = NULL;
    Node *b;

    cout << a << endl;
    cout << b << endl;

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
void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}
void RDisplay(Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        cout << p->data << "  ";
    }
}

int Count(Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

int Sum(Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int Max(Node *p)
{
    int max = 0;
    while (p != NULL)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, sizeof(A) / sizeof(int));

    cout << "Linked List: " << endl;
    Display(head);
    cout << endl;
    cout << "Number of nodes in the linked list is: " << Count(head) << endl;
    cout << "Sum of all the nodes in the linked list is: " << Sum(head) << endl;
    cout << "Max of all the nodes in the linked list is: " << Max(head) << endl;

    return 0;
}