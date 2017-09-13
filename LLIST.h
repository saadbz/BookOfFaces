//
// Created by saad on 9/10/2017.
//

#ifndef PROJECT1_ATTEMPT_2_LLIST_H
#define PROJECT1_ATTEMPT_2_LLIST_H



class List{
private :
    typedef  struct node{
        std::string data;
        node* next;

    }* nodeptr ;

    nodeptr head;
    nodeptr curr;
    nodeptr temp;

public:

    List();
    void AddEdge(std::string userName1, std::string userName2);
    void DeleteUser(std::string userName);
    void DeleteConnection(std::string userName1, std::string userName2);
    void PrintEdge();

    class myNode{
    private:
        nodeptr n1, n2;
    public:
        myNode();
        void EdgeList(nodeptr n1, nodeptr n2);

    };

};


#endif //PROJECT1_ATTEMPT_2_LLIST_H
