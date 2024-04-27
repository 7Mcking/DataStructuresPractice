//
// Created by mcwin on 27/04/2024.
//

#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H
#include "DoublyLinkedList.h"

class Queue {
private:
    DoublyLinkedList items;
    int numElements;

public:
    Queue();
    bool isEmpty();
    int getSize();
    int getFront();
    int getRear();
    bool showItems();
    void enqueue(int value);
    int dequeue();
    void reverseK(Queue & queue, int k);
    ~Queue();

};


#endif //STACK_QUEUE_H
