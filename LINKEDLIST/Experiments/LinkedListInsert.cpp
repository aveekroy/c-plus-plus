#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void displayLL(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int countNodesLL(Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

Node *createLL(int A[], int n, Node *ll)
{
    Node *tmp, *last;
    ll = new Node;

    ll->data = A[0];
    ll->next = NULL;
    last = ll;

    for (int i = 1; i < n; i++)
    {
        tmp = new Node;
        tmp->data = A[i];
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
    return ll;
}

Node *InsertNodeLL(Node *p, int index, int value)
{
    Node *tmp1, *tmp2, *last;
    if (index < 0 || index > countNodesLL(p))
    {
        return NULL;
    }
    tmp1 = new Node;
    tmp1->data = value;

    // This inserts in the begining of the Linked List
    if (index == 0)
    {
        tmp1->next = p; // pointing next of tmp1 to p node
        last = tmp1;
        p = tmp1; // making tmp1 as the HEAD of linkedList
        return p;
    }
    // This inserts after 1st node, in between two nodes and at the end of the LL
    else
    {
        tmp2 = p;
        for (int i = 0; i < index - 1; i++)
        {
            tmp2 = tmp2->next;
        }
        tmp1->next = tmp2->next;
        tmp2->next = tmp1;
        return p;
    }
}

// Node *InsertLastLL(Node *p, int value)
// {
//     Node *tmp, *last, *tmp2;
//     tmp = new Node;
//     tmp->data = value;
//     tmp->next = NULL;

//     last = new Node;

//     if (p == NULL)
//     {
//         p = last = tmp;
//     }
//     else
//     {
//         last->next = tmp;
//         last = tmp;
//     }
//     // displayLL(p);
//     return p;
// }

Node *InsertSortedArray(Node *p, int value)
{
    Node *tmp, *q = NULL;

    tmp = new Node;
    tmp->data = value;
    t->next = NULL;
}

int main(int argc, char const *argv[])
{

    Node *linkedList = NULL;
    Node *sortedLinkedList = NULL;

    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sortedA[] = {2, 5, 8, 9, 10, 12}

    linkedList = createLL(A, 8, linkedList);
    displayLL(linkedList);
    cout << endl;

    sortedLinkedList = createLL(sortedA, 6, sortedLinkedList);
    displayLL(sortedLinkedList);
    cout << endl;

    linkedList = InsertNodeLL(linkedList, 0, 15);
    displayLL(linkedList);
    cout << endl;

    linkedList = InsertNodeLL(linkedList, 4, 10);
    displayLL(linkedList);
    cout << endl;

    linkedList = InsertNodeLL(linkedList, 0, 25);
    displayLL(linkedList);
    cout << endl;

    linkedList = InsertNodeLL(linkedList, 6, 30);
    displayLL(linkedList);
    cout << endl;

    // linkedList = InsertLastLL(linkedList, 5);
    // displayLL(linkedList);
    // cout << endl;

    return 0;
}
