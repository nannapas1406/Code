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
        newNode->setNext(head);
        head = newNode;
    }
    else if(size == pos){
        tail->setNext(newNode);
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
    }
    size++;
}

Node* LinkedList::remove(int pos){
    if(head == NULL || pos<0 || pos>=size){
        return NULL;
    } 
    Node* temp = head;
    if(pos == 0){
        temp = head;
        head = head->getNext();
        temp->setNext(NULL);
        return temp;
    }
    for(int i=1;i<pos;i++){
        temp = temp->getNext();
    }
    Node* remove = temp->getNext();
    if(pos!=(size-1)){
        temp->setNext(remove->getNext());
        remove->setNext(NULL);
    }
    else if(pos == size-1){
        temp->setNext(NULL);
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