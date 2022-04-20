#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
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

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;
    // When a node needs to be inserted at the beginning
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    // When a node needs to be inserted in between two nodes or at the last
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

// There is an issue below for InsertAtLast - not working correctly

// void InsertAtLast(int value)
// {
//     Node *last = new Node;
//     Node *t = new Node;
//     t->data = value;
//     t->next = NULL;
//     if (first == NULL)
//     {
//         first = t;
//         last = t;
//     }
//     else
//     {
//         last->next = t;
//         last = t;
//     }
// }

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Insert(first, 0, 5);
    Display(first);
    cout << endl;
    Insert(first, 2, 15);
    Display(first);
    cout << endl;
    // InsertAtLast(19);
    // Display(first);
    return 0;
}