#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main(){
    Stack stk;
    Queue q;

    Node *node1 = new Node(10, NULL);
    Node *node2 = new Node(20, NULL);
    Node *node3 = new Node(30, NULL);
    Node *node4 = new Node(40, NULL);
    Node *node5 = new Node(50, NULL);

    cout << "-------Stack-------" << endl;
    stk.push(node1);
    stk.push(node2);
    stk.pop();
    stk.push(node3);
    cout << stk.peek();
    cout << endl;
    cout << stk.getSize() << endl;
    stk.push(node4);
    stk.print();
    Node *keeppop = stk.pop();
    cout << keeppop->getValue() << endl;

    cout << "-------Queue-------" << endl;
    q.enqueue(node4);
    q.enqueue(node5);
    q.enqueue(node1);
    q.enqueue(node2);
    q.dequeue();
    q.dequeue();
    cout << q.peek();
    q.print();

    return 0;
}