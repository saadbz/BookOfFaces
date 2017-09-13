//
// Created by saad on 9/12/2017.
//

#include <cstdlib>
#include <iostream>
#include "Edge.h"
#include "LLIST.h"

using  namespace std;

EDGE ::EDGE() {
    head = NULL;
    curr = NULL;
    temp = NULL;
    prev = NULL;
}

void EDGE ::Uoe(std::string OutGoingUsername) {
    EdgeNode EN1 = new node;
    EN1->next = NULL;
    EN1 = head;
    EN1->edgeData = OutGoingUsername;

    if (head != NULL)
    {
        //curr = head;
        //EN1 = head;
        while (EN1->next != NULL)
        {
            EN1 = curr->next;
            cout << OutGoingUsername << " " << curr->edgeData;
        }
    }
}

void EDGE::Print() {
    curr = head;
    while (curr != NULL)
    {
        cout << curr->edgeData;
        curr = curr->next;
    }
}