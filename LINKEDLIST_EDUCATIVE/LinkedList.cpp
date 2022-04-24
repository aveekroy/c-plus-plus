#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

Node *LinkedList::getHead()
{
    return head;
}

bool LinkedList::isEmpty()
{
    if (head == nullptr) // Check whether the head points to null
        return true;
    else
        return false;
}