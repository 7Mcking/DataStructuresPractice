//
// Created by mcwin on 27/04/2024.
//

#include "Queue.h"

Queue::Queue() {
    numElements = 0;
}

bool Queue::isEmpty() {
    return items.isEmpty();
}

int Queue::getSize() {
    return numElements;
}

int Queue::getFront() {
    return items.getHead();
}

int Queue::getRear() {
    return items.getTail();
}

bool Queue::showItems() {
    return items.printList();
}

void Queue::enqueue(int value) {
    items.insertTail(value);
    numElements++;
}

int Queue::dequeue() {
    if (isEmpty()){
        return -1;
    }
    int value = items.getHead();
    numElements--;
    items.deleteHead();
    return value;

}

Queue::~Queue() {
    while (!isEmpty()){
        dequeue();
    }
}



