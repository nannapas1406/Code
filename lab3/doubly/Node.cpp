#include <iostream>
#include "Node.h"
using namespace std;

Node::Node()
{
    value = 0;
    next = NULL;
}

Node::Node(int newValue, Node* newNext)
{
    value = newValue;
    next = newNext;
}

void Node::print()
{
    cout << value << " ";
    //cout << next;
}

int Node::getValue()
{
    return value;
}

void Node::setValue(int newValue)
{
    value = newValue;
}

Node *Node::getNext()
{
    return next;
}

void Node::setNext(Node* newNext)
{
    next = newNext;
}

Node *Node::getPrev()
{
    return prev;
}

void Node::setPrev(Node* newPrev)
{
    prev = newPrev;
}