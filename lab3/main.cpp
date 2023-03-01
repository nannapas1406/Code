// #include <iostream>
// #include "Node.h"
// using namespace std;

// int main()
// {
//     Node n1 = Node(1, NULL);
//     Node n2 = Node(2, NULL);
//     Node n3 = Node(3, NULL);

//     n1.setValue(5);
//     cout<<n1.getValue()<<endl;

//     n2.setNext(&n3);
//     Node *n2next = n2.getNext();

//     //cout<<n2.getNext()->getValue();
//     cout<<n2next->getValue()<<endl;
//     cout<<n2next<<endl;
//     cout<<&n3<<endl;


//     return 0;
// }

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    Node *node1 = new Node(5, NULL);
    Node *node2 = new Node(9, NULL);
    Node *node3 = new Node(7, NULL);
    Node *node4 = new Node(10, NULL);

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
    LinkedList1->remove(2);
    LinkedList1->print();
    cout << endl;
    return 0;
}