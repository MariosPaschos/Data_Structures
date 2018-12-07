#include "LinkedList.h"
#include "Utils.h"
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
#include "Node.h"

#include <iostream>


int main() {

    size_t a = 2342342342343;
    int b = 12;
    Node<int> A(a, b);
    std::cout << A << std::endl;

    return 0;
}