//
// Created by mcwin on 27/04/2024.
//

#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;

}

DoublyLinkedList::~DoublyLinkedList() {
    while (head != nullptr){
        Node* temp = head;
        head = head->nextElement;
        delete temp;
    }
    tail = nullptr;
    size = 0;
};

bool DoublyLinkedList::isEmpty() {
    return size == 0;
}

int DoublyLinkedList::getHead() {
    if(isEmpty()){
        return -1;
    }

    return head->data;
}

int DoublyLinkedList::getTail() {
    if(isEmpty()){
        return -1;
    }

    return tail->data;
}

int DoublyLinkedList::printList() {
    if(isEmpty()){
        return -1;
    }

    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "-->";
        temp = temp->nextElement;
    }
    cout<<"Null"<<endl;
    cout << endl;
    return 0;
}

int DoublyLinkedList::insertTail(int value) {
    if (isEmpty()){
        insertHead(value);
        tail = head;
        return 0;
    }
    Node* newNode = new Node(value);
    tail->nextElement = newNode;
    newNode->previousElement = tail;
    tail = newNode;
    size++;

return 0;
}

bool DoublyLinkedList::deleteHead() {
    if (isEmpty()){
        return false;
    }
    Node* temp = head;
    head = head->nextElement;
    delete temp;
    size--;
    return true;
}

int DoublyLinkedList::insertHead(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr){
        head = newNode;
        tail = newNode;
    } else {
        newNode->nextElement = head;
        head->previousElement = newNode;
        head = newNode;
    }
    size++;
    return 0;
}

void DoublyLinkedList::deleteTail() {
    if (isEmpty()){
        return;
    }
    Node* temp = tail;
    tail = tail->previousElement;
    delete temp;
    size--;

}
