#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h"

class LinkedList
{
private:
    int size;
public:
    Node *head;
    Node *tail;
    LinkedList();
    void insert(Node *newNode, int pos);
    Node* remove(int pos);
    void print();
    int getSize();
};

#endif