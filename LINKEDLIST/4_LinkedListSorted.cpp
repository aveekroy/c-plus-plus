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
void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

bool isLinkedListSorted(Node *p)
{
    int x = -32768;
    while (p)
    {
        if (p->data < x)
        {
            return false;
        }
        x = p->data;
        p = p->next;
    }
    return true;
}

int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Display(head);
    cout << endl;

    cout << isLinkedListSorted(head) << endl; // 1 - true , 0 - false

    return 0;
}