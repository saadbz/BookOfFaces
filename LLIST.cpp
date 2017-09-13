//
// Created by saad on 9/10/2017.
//

#include <cstdlib>
#include <iostream>

#include "LLIST.h"

using  namespace std;


List::List() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddEdge(std::string userName1, std::string userName2) {
    nodeptr E1 = new node;
    nodeptr E2 = new node;
    E1->next = NULL;
    E1->data = userName1;
    E2->data = userName2;
    myNode m;
    m.EdgeList(E1, E2);

    if( head != NULL){
        curr = head;
        while (curr->next != NULL){
            curr = curr->next;
        }
        curr->next = E1;
        E1->next = E2;
    }
    else
    {
        head = E1;
        head->next = E2;
    }

}

void List::myNode::EdgeList(nodeptr n1, nodeptr n2) {
    n1=n1;
    n2=n2;
}

void List::PrintEdge() {
    curr = head;
    int count = 0;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
        count++;
        if (count == 2)
        {
            cout << endl;
            count =0;
        }
    }

}

void List::DeleteUser(std::string userName) {
    nodeptr del = NULL;
    temp = head;
    curr = head;
    while (curr != NULL && curr ->data != userName){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << userName << " was not in the list\n";
        delete del;
    }
    else {
        del = curr;
        curr = curr->next;
        temp->next = curr;
        if (del == head)
        {
            head = head->next;
            temp = NULL;
        }
        delete del;
        cout << "The value " << userName << " was deleted\n" ;
    }
}

void List ::DeleteConnection(std::string userName1, std::string userName2) {
    nodeptr name1 = new node;
    nodeptr name2 = new node;
    name1->next = NULL;
    name1->data = userName1;
    name2->data = userName2;

}

