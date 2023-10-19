//
// Created by vivekdagar on 30/9/23.
//

#ifndef TEST_STACK_H
#define TEST_STACK_H


#include <ostream>

struct Node {
    int data;
    Node *next;

    explicit Node(int data) : data(data), next(nullptr) {}          // Constructor for node
};

class Stack {
    Node *top;
public:
    explicit Stack();

    bool empty() const {      // There will be no function to chceck if its full because its system dependent.
        return this->top == nullptr;
    }

    void push(int x);

    int pop();

    friend std::ostream &operator<<(std::ostream &os, const Stack &stack);

    int peek();

    virtual ~Stack();
};


#endif //TEST_STACK_H
