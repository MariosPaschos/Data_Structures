#ifndef FILE_SYSTEM_DOUBLYLINKEDLIST_H
#define FILE_SYSTEM_DOUBLYLINKEDLIST_H


#include "LinkedList.h"

class DoublyLinkedList : public LinkedList {

public:
    DoublyLinkedList()= default;
    ~DoublyLinkedList()= default;

    void addNode(Node *node) override;
    void removeNode(Node *node) override;
};


#endif //FILE_SYSTEM_DOUBLYLINKEDLIST_H
