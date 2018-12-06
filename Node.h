#ifndef FILE_SYSTEM_NODE_H
#define FILE_SYSTEM_NODE_H


#include <cstddef>
#include <ostream>
#include <set>

using namespace std;

class Node {
private:
    Node *next;
    Node *previous;
    int value;
    size_t ID;
public:
    Node();
    explicit Node(int value);
    ~Node()= default;
    Node(const Node &node)= default;
    Node &operator=(const Node &node)= default;

    Node *getNext() const;
    void setNext(Node *next);
    Node *getPrevious() const;
    void setPrevious(Node *previous);
    int getValue() const;
    void setValue(int value);
    void setID(size_t ID);
    size_t getID() const;

    friend std::ostream &operator<<(std::ostream &os, const Node &node);
};


#endif //FILE_SYSTEM_NODE_H
