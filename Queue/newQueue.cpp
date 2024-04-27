//
// Created by mcwin on 28/04/2024.
//

#include "newQueue.h"

newQueue::newQueue(int size) {
    this->size = size;
    MainStack = new Stack(size);
    TempStack = new Stack(size);
    numElements = 0;
    capacity = size;
}

void newQueue::enqueue(int value) {
    if(numElements == capacity){
        return;
    }
    MainStack->push(value);
    numElements++;
}

int newQueue::dequeue() {
    if(numElements == 0){
        return -1;
    }
    transferElements();
    int value = TempStack->pop();
    numElements--;
    //transfer elements back to main stack
    while (!TempStack->isEmpty()){
        MainStack->push(TempStack->pop());
    }
    return value;
}

void newQueue::transferElements() {
    if(TempStack->isEmpty()){
        while (!MainStack->isEmpty()){
            TempStack->push(MainStack->pop());
        }
    }

}

newQueue::~newQueue() {
    delete MainStack;
    delete TempStack;
}
