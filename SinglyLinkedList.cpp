#include "SinglyLinkedList.h"


void SinglyLinkedList::addNode(Node<int> *node) {

    Node<int> *p = nullptr;
    if (head == nullptr){   // If LinkedList is empty then set the node as its head.
        setHead(node);
        setLast(head);  // The list has only one element - the head and the last are one and the same
        size++;
    }
    else{   // Else search for the last element of the list which points to nullptr and append the node after it.
        p = head;
        while (p->getChild() != nullptr){    // or this->getLast()
            p = p->getChild();
        }
        p->setChild(node);
        p->getChild()->setValue(node->getValue());
        setLast(p->getChild());
        size++;
    }
}


void SinglyLinkedList::removeNode(Node<int> *node) {

    if (node != head) {
        Node<int> *previous = head;
        Node<int> *current = head->getChild();

        while (current != node) {
            previous = current;             // Tracking the last node before the node we want to remove
            current = current->getChild();   // Tracking the the node we want to remove
        }
        previous->setChild(node->getChild());
        //delete current;
    }

    else {  // If we are about to remove the head of the list
        if (size > 1) {                  // If there is at least one more element except for the head
            setHead(node->getChild());
        }
        else {
            setHead(nullptr);
        }
    }
    size--;
    delete node;
}

