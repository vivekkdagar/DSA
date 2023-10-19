//
// Created by vivekdagar on 19/10/23.
//

#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include <vector>
#include <ostream>

class Stack {
    unsigned short size;
    int top;
    std::vector<int> array;
public:
    explicit Stack(unsigned short size);

    bool isFull() const {
        return this->top == this->size - 1;
    }

    void push(int x);

    bool isEmpty() const {
        return this->top == -1;
    }

    int pop();

    int peek() {
        return isEmpty() ? -1 : this->array.at(this->top);
    }

    friend std::ostream &operator<<(std::ostream &os, const Stack &stack);

    virtual ~Stack();
};


#endif //ARRAY_STACK_H
