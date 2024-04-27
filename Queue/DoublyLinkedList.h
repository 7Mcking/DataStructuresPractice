//
// Created by mcwin on 27/04/2024.
//

#ifndef STACK_DOUBLYLINKEDLIST_H
#define STACK_DOUBLYLINKEDLIST_H


#include <memory>
#include <iostream>
using namespace std;

class Node {
public:
    int data; //Data to store (could be int,string,object etc)
    Node* nextElement;  //Pointer to next element
    Node* previousElement;

    Node(int data){
        //Constructor to initialize nextElement of newlyCreated Node
        this->data=data;
        nextElement=nullptr;
        previousElement=nullptr;
    }
};


class DoublyLinkedList {
private:
    Node* tail;
    Node* head;

public:
    int size;
    DoublyLinkedList();
    ~DoublyLinkedList();
    bool isEmpty();
    int getHead();
    int getTail();
    int printList();
    int insertTail(int value);
    int insertHead(int value);
    void deleteTail();
    bool deleteHead();


};





#endif //STACK_DOUBLYLINKEDLIST_H
