#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *head = NULL;

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

void Insert(struct Node *p, int index, int x)
{
    Node *t;
    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;
    // When a node needs to be inserted at the beginning
    if (index == 0)
    {
        t->next = head;
        head = t;
    }
    // When a node needs to be inserted in between two nodes or at the last
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

// There is an issue below for InsertAtLast - not working correctly

// void InsertAtLast(Node *p, int value)
// {
//     Node *last;
//     Node *t = new Node;
//     t->data = value;
//     t->next = NULL;

//     if (head == NULL)
//     {
//         head = t;
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

    // InsertAtLast(head, 19);
    // Display(head);

    // InsertAtLast(head, 39);
    // Display(head);

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Display(head);
    cout << endl;

    Insert(head, 0, 5);
    Display(head);
    cout << endl;

    Insert(head, 4, 15);
    Display(head);
    cout << endl;

    return 0;
}