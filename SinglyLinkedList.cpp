#include "SinglyLinkedList.h"


void SinglyLinkedList::addNode(Node *node) {

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
        p->getNext()->setValue(node->getValue());
        setLast(p->getNext());
        size++;
    }
}


void SinglyLinkedList::removeNode(Node *node) {

    if (node != head) {
        Node *previous = head;
        Node *current = head->getNext();

        while (current != node) {
            previous = current;             // Tracking the last node before the node we want to remove
            current = current->getNext();   // Tracking the the node we want to remove
        }
        previous->setNext(node->getNext());
        //delete current;
    }

    else {  // If we are about to remove the head of the list
        if (size > 1) {                  // If there is at least one more element except for the head
            setHead(node->getNext());
        }
        else {
            setHead(nullptr);
        }
    }
    size--;
    delete node;
}

