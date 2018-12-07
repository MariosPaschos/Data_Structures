#ifndef FILE_SYSTEM_LINKEDLIST_H
#define FILE_SYSTEM_LINKEDLIST_H

#include "Node.h"

#include <vector>


using namespace std;

class LinkedList {
private:

protected:
    Node<int> *head;
    Node<int> *last;
    size_t size;
public:
    LinkedList();
    ~LinkedList()= default;

    void setHead(Node<int> *node);
    Node<int> *getHead() const;
    Node<int> *getLast() const;
    void setLast(Node<int> *last);
    size_t getSize() const;
    bool isEmpty() const ;
    virtual void addNode(Node<int> *node)=0;
    virtual void removeNode(Node<int> *node)=0;
    void printLinkedList();

};


#endif //FILE_SYSTEM_LINKEDLIST_H
