#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

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

Node *LinearSearch(Node *p, int value)
{
    while (p != NULL)
    {
        if (p->data == value)
        {
            return p; // returning the address of that node
        }
        p = p->next;
    }
    return NULL;
}

Node *RecursiveLinearSearch(Node *p, int value)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (value == p->data)
    {
        return p;
    }
    return RecursiveLinearSearch(p->next, value);
}

int main(int argc, char const *argv[])
{
    Node *linkedList = NULL;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    linkedList = createLL(A, 8, linkedList);
    Node *temp = LinearSearch(linkedList, 32);
    if (temp)
    {
        cout << "Value " << temp->data << " is found " << endl;
    }
    else
    {
        cout << "Value is not found" << endl;
    }

    Node *tmp = RecursiveLinearSearch(linkedList, 32);
    if (tmp)
    {
        cout << "Value " << tmp->data << " is found " << endl;
    }
    else
    {
        cout << "Value is not found" << endl;
    }

    return 0;
}