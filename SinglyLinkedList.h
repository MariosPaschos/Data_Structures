#ifndef FILE_SYSTEM_SINGLYLINKEDLIST_H
#define FILE_SYSTEM_SINGLYLINKEDLIST_H


#include "LinkedList.h"


class SinglyLinkedList : public LinkedList {

public:
    SinglyLinkedList()= default;
    ~SinglyLinkedList()= default;

    void addNode(Node *node) override;
    void removeNode(Node *node) override;
};


#endif //FILE_SYSTEM_SINGLYLINKEDLIST_H
