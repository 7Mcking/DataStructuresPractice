//
// Created by mcwin on 27/04/2024.
//

#include <iostream>
#include "Stack.h"

Stack::Stack(int size) {
    stackArr = new vector<int>(size);
    capacity = size;
    numElements = 0;
}

bool Stack::isEmpty() {

    return numElements == 0;
}

int Stack::getTop() {
    if (isEmpty()) {
        std::cerr << "Stack is empty.\n";
        return -1;
    }
    return stackArr->at(numElements - 1);
}

bool Stack::push(int value) {
    if (numElements == capacity) {
        return false;
    }
    stackArr->at(numElements) = value;
    numElements++;
    return true;
}

int Stack::pop() {
    if (isEmpty()) {
        return -1;
    }
    numElements--;
    return stackArr->at(numElements);
}

int Stack::getSize() {
    return numElements;
}

void Stack::showStack() {
    for (int i = 0; i < numElements; i++) {
        cout << stackArr->at(i) << "<--";
    }
    cout << "HEAD";
    cout << endl;

}
