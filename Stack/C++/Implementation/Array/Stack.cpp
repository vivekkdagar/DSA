//
// Created by vivekdagar on 19/10/23.
//

#include <iostream>
#include "Stack.h"

Stack::Stack(unsigned short size) : size(size) {
    array.resize(this->size);
    top = -1;
}

void Stack::push(int x) {           // Insert an element into the stack (top)
    if (isFull()) {
        std::cerr << "Stack overflow!\n";
        return;
    }

    this->top++;
    this->array.at(top) = x;
}

int Stack::pop() {          // Remove an element from stack (top)
    int x{-1};

    if (isEmpty()) {
        std::cerr << "Stack underflow!\n";
        return x;
    }

    x = this->array[top];
    array.pop_back();
    this->top--;
    return x;
}

std::ostream &operator<<(std::ostream &os, const Stack &stack) {            // Printing the stack using cout
    for (int i{stack.top}; i >= 0; i--)
        os << stack.array.at(i) << std::endl;
    os << std::endl;
    return os;
}

Stack::~Stack() {
    array.clear();
}
