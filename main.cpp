#include <iostream>
#include <cstdlib>
#include "Queue/Queue.h"
#include <string>
#include "Stack/Stack.h"


int main() {
    Stack stack(7);
    stack.push(2);
    stack.push(97);
    stack.push(4);
    stack.push(42);
    stack.push(12);
    stack.push(60);
    stack.push(23);

    stack.showStack();

    Stack returnStack =  stack.sortStack(stack, 7);

    returnStack.showStack();


    return 0;
}




