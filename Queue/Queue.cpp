//
// Created by mcwin on 27/04/2024.
//

#include "Queue.h"
#include "../Stack/Stack.h"

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

void Queue::reverseK(Queue &queue, int k) {
    if (queue.isEmpty() || k > queue.getSize()){
        return;
    }

    Stack stack(k);
    for (int i = 0; i < k; i++) {
        stack.push(queue.dequeue());
    }

    while (!stack.isEmpty()){
        queue.enqueue(stack.pop());
    }

    for (int i = 0; i < queue.getSize() - k; i++) {
        queue.enqueue(queue.dequeue());
    }




}



