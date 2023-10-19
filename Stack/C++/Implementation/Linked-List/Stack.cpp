//
// Created by vivek on 01-01-2023.
//

#include <iostream>
#include "Stack.h"

Stack::Stack() : top(nullptr) {}            // Constructor

void Stack::push(int x) {           // Push operation: insert element into stack
    if (empty()) {
        top = new Node(x);
        return;
    }
    Node *t = new Node(x);
    t->next = top;
    top = t;
}

int Stack::pop() {         // Pop operation: remove element from stack
    if (this->empty()) {
        std::cerr << "Stack underflow!\n";
        return -1;
    }

    int x = top->data;
    Node *t = top;
    top = top->next ? top->next : nullptr;
    delete t;
    return x;
}

std::ostream &operator<<(std::ostream &os, const Stack &stack) {            // Printing the stack
    Node *t = stack.top;
    while (t) {
        os << t->data << std::endl;
        t = t->next;
    }
    os << std::endl;
    return os;
}

int Stack::peek() {         // Getting the top element of the stack
    return empty() ? -1 : this->top->data;
}

Stack::~Stack() {           // Destructor to free up heap memory used by linked list
    Node *t = this->top;
    while (t) {
        top = top->next;
        delete t;
        t = top;
    }
}
