#ifndef FILE_SYSTEM_LINKEDLIST_H
#define FILE_SYSTEM_LINKEDLIST_H

#include "Node.h"

#include <vector>


using namespace std;

class LinkedList {
private:

protected:
    Node *head;
    Node *last;
    size_t size;
public:
    LinkedList();
    ~LinkedList()= default;

    void setHead(Node *node);
    Node *getHead() const;
    Node *getLast() const;
    void setLast(Node *last);
    size_t getSize() const;
    bool isEmpty() const ;
    virtual void addNode(Node *node)=0;
    virtual void removeNode(Node *node)=0;
    void printLinkedList();

};


#endif //FILE_SYSTEM_LINKEDLIST_H
