#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

#include <ostream>
#include <iomanip>

template <typename T>
class Node {
private:
    size_t ID;
    T value;
    Node<T> *parent;
    Node<T> *child;

public:
    explicit Node(size_t ID, T value) : ID(ID), value(value) {}
    ~Node() = default;
    Node(const Node &node) = default;
    Node &operator=(const Node &node) = default;

    size_t getID() const {
        return ID;
    }
    void setID(size_t ID) {
        this->ID = ID;
    }
    T getValue() const {
        return value;
    }
    void setValue(T value) {
        this->value = value;
    }

    void setParent(Node<T> *parent){
        this->parent = parent;
    }
    Node<T> *getParent() const {
        return parent;
    }
    void setChild(Node<T> *child){
        this->child= child;
    }
    Node<T> *getChild() const {
        return child;
    }

    friend std::ostream &operator<<(std::ostream &os, const Node &node) {
        os << "ID: " << node.ID << std::endl;
        os << "Value: " << node.value << std::endl;
        return os;
    }

};





#endif //DATA_STRUCTURES_NODE_H
