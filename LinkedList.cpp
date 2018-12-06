#include "LinkedList.h"
#include "Utils.h"

#include <iostream>

LinkedList::LinkedList() : head(nullptr), last(nullptr), size(0) {}


void LinkedList::printLinkedList() {

    Node *p = nullptr;
    p = head;

    if (p != nullptr) {
        while (p != nullptr) {
            cout << *p << " -> ";
            p = p->getNext();
        }
    }
    else {
        cout << "LinkedList contains no elements. " << endl;
    }
}

void LinkedList::setHead(Node *node) {
    this->head = node;
}

Node *LinkedList::getHead() const {
    return head;
}

Node *LinkedList::getLast() const {
    return last;
}

void LinkedList::setLast(Node *last) {
    this->last = last;
}

size_t LinkedList::getSize() const {
    return size;
}

bool LinkedList::isEmpty() const {
    return  size == 0;
}




