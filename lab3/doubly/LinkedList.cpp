#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
    size = 0;
}

void LinkedList::insert(Node* newNode, int pos){
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else if(pos == 0){
        Node *temp;
        newNode->setNext(head);
        newNode->setPrev(NULL);
        head = newNode;
        temp = head->getNext();
        temp->setPrev(head);
    }
    else if(size == pos){
        tail->setNext(newNode);
        newNode->setPrev(tail);
        newNode->setNext(NULL);
        tail = newNode;
    }
    else{
        Node* temp = head;
        for(int i=1;i<pos;i++){
            temp = temp->getNext();
        }
        Node* temp1 = temp->getNext();
        temp->setNext(newNode);
        newNode->setNext(temp1);
        temp1->setPrev(newNode);
        newNode->setPrev(temp);
    }
    size++;
}

Node* LinkedList::remove(int pos){
    if(pos < 0){
      pos += size;  
    }
    if(head == NULL || pos<0 || pos>=size){
        return NULL;
    } 
    Node* temp = head;
    if(pos == 0){
        temp = head;
        head = head->getNext();
        temp->setNext(NULL);
        head->setPrev(NULL);
        size--;
        return temp;
    }
    for(int i=1;i<pos;i++){
        temp = temp->getNext();
    }
    Node* remove = temp->getNext();
    if(pos!=(size-1)){
        temp->setNext(remove->getNext());
        remove->getNext()->setPrev(temp);
        remove->setNext(NULL);
        remove->setPrev(NULL);
    }
    else if(pos == size-1){
        temp->setNext(NULL);
        tail->setPrev(NULL);
        tail = temp;
    }
    size--;
    return remove;
}

void LinkedList::print(){
    Node* temp = head;
    while(temp!=NULL){
        temp->print();
        cout << " ";
        temp = temp->getNext();
    }
    cout << endl << "LinkedList size: " << size;
}