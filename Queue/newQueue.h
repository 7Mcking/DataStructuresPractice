//
// Created by mcwin on 28/04/2024.
//

#ifndef STACK_NEWQUEUE_H
#define STACK_NEWQUEUE_H

#include "../Stack/Stack.h"
using namespace std;
class newQueue {
private:
    Stack *MainStack;
    Stack *TempStack;
    int size;
    int numElements;
    int capacity;

    void transferElements();



public:
    //Inserts Element in the Queue
    newQueue(int size);
    ~newQueue();

    void enqueue(int value) ;
    //Removes and Returns Element From Queue
    int dequeue() ;
};


#endif //STACK_NEWQUEUE_H
