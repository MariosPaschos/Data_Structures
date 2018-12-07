#include "DoublyLinkedList.h"



void DoublyLinkedList::addNode(Node<int> *node) {

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
        p->getChild()->setParent(p);
        p->getChild()->setValue(node->getValue());
        setLast(p->getChild());
        size++;
    }
}

void DoublyLinkedList::removeNode(Node<int> *node) {

    if (node == this->head){             // If we are about to remove the head of the list
        if (size > 1) {                  // If there is at least one more element except for the head
            setHead(node->getChild());
            head->setParent(nullptr);  // The second element becomes head of the list now so it will have no previous element now.
        }
        else {
            setHead(nullptr);
        }
    }
    else {
        node->getParent()->setChild(node->getChild());
    }
    size--;
    delete node;
}


