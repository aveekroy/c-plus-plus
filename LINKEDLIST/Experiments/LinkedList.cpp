#include <iostream>
using namespace std;

// The below is called self-referential structure
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

void displayLL(Node *p)
{
    while (p != NULL)
    {

        cout << p->data << " ";
        p = p->next;
    }
}

void RdisplayLL(Node *p)
{
    if (p != NULL)
    {

        cout << p->data << " ";
        RdisplayLL(p->next);
    }
}

void reverseLL(Node *p)
{
    if (p != NULL)
    {
        reverseLL(p->next);

        cout << p->data << " ";
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

int addAllElementsLL(Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int maxLL(Node *p)
{
    int max = INT32_MIN;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int main(int argc, char const *argv[])
{
    Node *linkedList = NULL;
    int A[] = {3, 5, 7, 10, 15};
    linkedList = createLL(A, 5, linkedList);
    cout << "Displaying Linked List --> " << endl;
    displayLL(linkedList);
    cout << endl;
    cout << "Recursively Displaying Linked List --> " << endl;
    RdisplayLL(linkedList);
    cout << endl;
    cout << "Reversed Linked List -->" << endl;
    reverseLL(linkedList);
    cout << endl;
    cout << "Nodes in the Linked List --> " << countNodesLL(linkedList);
    cout << endl;
    cout << "Sum of All Elements in the Linked List --> " << addAllElementsLL(linkedList);
    cout << endl;
    cout << "Max of All Elements in the Linked List --> " << maxLL(linkedList);
    cout << endl;

    return 0;
}
