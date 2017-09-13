//
// Created by saad on 9/12/2017.
//

#ifndef PROJECT1_ATTEMPT_2_EDGE_H
#define PROJECT1_ATTEMPT_2_EDGE_H

#include "LLIST.h"
#include <string>

class EDGE{
private:
    typedef struct node {
        std::string edgeData;
        node* next;
    }* EdgeNode;

    EdgeNode head;
    EdgeNode temp;
    EdgeNode curr;
    EdgeNode prev;

public:
    EDGE();
    void Uoe(std::string OutGoingUsername);
    void Uie(std::string IncomingUsername);
    void Print();


};

#endif //PROJECT1_ATTEMPT_2_EDGE_H
