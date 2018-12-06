#include "Node.h"
#include "Utils.h"


Node::Node() : next(nullptr), previous(nullptr), value(0), ID(utils::randomGenerator()) {}

Node::Node(int value) : next(nullptr), previous(nullptr), value(value), ID(utils::randomGenerator()) {}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    this->next = next;
}

Node *Node::getPrevious() const {
    return previous;
}

void Node::setPrevious(Node *previous) {
    this->previous = previous;
}

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    this->value = value;
}

void Node::setID(size_t ID) {
    Node::ID = ID;
}

size_t Node::getID() const {
    return ID;
}

std::ostream &operator<<(std::ostream &os, const Node &node) {
    os << "(Node " << node.ID << ": " << node.value << ")";
    return os;
}



