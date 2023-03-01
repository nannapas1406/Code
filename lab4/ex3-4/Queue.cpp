#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue():LinkedList(){

}

Queue::~Queue(){

}

void Queue::enqueue(Node *newNode){
    insert(newNode,getSize());
}

Node *Queue::dequeue(){
    Node *temp = head;
    remove(0);
    return temp;
}

int Queue::peek(){
    return head->getValue();
}