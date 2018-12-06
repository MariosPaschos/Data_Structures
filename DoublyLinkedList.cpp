#include "DoublyLinkedList.h"


void DoublyLinkedList::addNode(Node *node) {

    Node *p = nullptr;
    if (head == nullptr){   // If LinkedList is empty then set the node as its head.
        setHead(node);
        setLast(head);  // The list has only one element - the head and the last are one and the same
        size++;
    }
    else{   // Else search for the last element of the list which points to nullptr and append the node after it.
        p = head;
        while (p->getNext() != nullptr){    // or this->getLast()
            p = p->getNext();
        }
        p->setNext(node);
        p->getNext()->setPrevious(p);
        p->getNext()->setValue(node->getValue());
        setLast(p->getNext());
        size++;
    }
}

void DoublyLinkedList::removeNode(Node *node) {

    if (node == this->head){             // If we are about to remove the head of the list
        if (size > 1) {                  // If there is at least one more element except for the head
            setHead(node->getNext());
            head->setPrevious(nullptr);  // The second element becomes head of the list now so it will have no previous element now.
        }
        else {
            setHead(nullptr);
        }
    }
    else {
        node->getPrevious()->setNext(node->getNext());
    }
    size--;
    delete node;
}


