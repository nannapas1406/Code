#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack():LinkedList(){

}

Stack::~Stack(){

}

void Stack::push(Node *newNode){
    insert(newNode,0);
}

Node *Stack::pop(){
    Node *temp = head;
    remove(0);
    return temp;
}

int Stack::peek(){
    return head->getValue();
}