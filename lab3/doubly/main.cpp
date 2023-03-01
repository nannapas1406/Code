#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    Node *node1 = new Node(1, NULL);
    Node *node2 = new Node(2, NULL);
    Node *node3 = new Node(3, NULL);
    Node *node4 = new Node(4, NULL);

    LinkedList *LinkedList1 = new LinkedList();

    LinkedList1->insert(node2,0);
    LinkedList1->print();
    cout << endl;
    LinkedList1->insert(node1,0);
    LinkedList1->print();
    cout << endl;
    LinkedList1->insert(node3,2);
    LinkedList1->print();
    cout << endl;
    LinkedList1->insert(node4,2);
    LinkedList1->print();
    cout << endl;

    // cout << node4->getNext();
    // cout << endl;
    // cout << node4->getPrev();
    // cout << endl;

    // cout << node3;
    // cout << endl;
    // cout << node2;
    // cout << endl;


    // LinkedList1->remove(0);
    // LinkedList1->print();
    // cout << endl;

    LinkedList1->remove(-3);
    LinkedList1->print();
    cout << endl;

    // LinkedList1->insert(node4,2);
    // LinkedList1->print();

    // cout << node1->getNext();
    // cout << endl;
    // cout << node1->getPrev();
    // cout << endl;

    return 0;
}