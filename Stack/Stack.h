//
// Created by mcwin on 27/04/2024.
//

#ifndef LINKEDLIST_CPP_STACK_H
#define LINKEDLIST_CPP_STACK_H

#include <vector>
using namespace  std;

class Stack {
private:
    vector<int> *stackArr;
    int capacity;
    int numElements;
public:
    Stack(int size);
    bool isEmpty();
    int getTop();
    bool push(int value);
    int pop();
    int getSize();
    void showStack();
};


#endif //LINKEDLIST_CPP_STACK_H
