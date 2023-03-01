#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

class Stack: public LinkedList{
    public:
        Stack();
        ~Stack();  
        void push(Node *newNode);
        Node *pop();
        int peek();
};

#endif