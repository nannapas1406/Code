#include<iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main(){
    Stack stk;
    Queue row2, row3;

    int i;
    int num[] = {0, 1, 2 ,3, 0, 4, 5};
    int row[] = {0, 0, 1, 1};

    cout << "-------PostLab Stack-------" << endl;

    for(i=0; i<size(num); i++){
        if(num[i] != 0){
            Node *newCard = new Node(num[i],NULL);
            stk.push(newCard);  
        }
        else if(num[i] == 0){
            if(num[i] == 0){
                Node *newCard = new Node(num[i],NULL);
                stk.push(newCard);
            }
            else if(num[i] == 0){
                Node *newCard = new Node(num[i],NULL);
                Node *temp = new Node(stk.peek(),NULL);
                stk.pop();
                stk.push(newCard);
                stk.push(temp); 
            }
           
        }
    }
    stk.print();
    cout << endl;

    cout << "-------PostLab Queue-------" << endl;
    for(i=0; i<size(row); i++){
        Node *newQueue = new Node(row[i],NULL);
        if(row[i]%2==0){
            row2.enqueue(newQueue);
        }
        else if(row[i]%2!=0){
            row3.enqueue(newQueue);
        }
        if(row2.getSize()>0 && row3.getSize()>0){
            if(row2.peek()>row3.peek()){
                Node *temp = row2.dequeue();
                row2.enqueue(temp);
            }
            else if(row3.peek()>row2.peek()){
                Node *temp = row3.dequeue();
                row3.enqueue(temp);
            }
        }
    }
    row2.print();
    cout << endl;
    row3.print();
        
    return 0;
}