#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack stk(5);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(9);

    stk.pop();
    cout << stk.pop();
}
