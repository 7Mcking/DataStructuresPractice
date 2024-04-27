//
// Created by mcwin on 28/04/2024.
//

#ifndef STACK_TWOSTACK_H
#define STACK_TWOSTACK_H


using namespace  std;
class twoStacks {

private: int size;
    int * arr;
    int top1,top2;

public:
    // Initialize the two stacks here
    twoStacks(int n) {
        size = n;
        arr = new int[size];
        top1 = -1;
        top2 = size;

    }
    // Insert Value in First Stack
    void push1(int value) {
        if(top1 < top2 - 1){
            arr[++top1] = value;

        }

    }
    // Insert Value in Second Stack
    void push2(int value) {
        if(top2 > top1 + 1){
            arr[--top2] = value;
        }
    }
    // Return and remove top Value from First Stack
    int pop1() {
        if(top1 >= 0){
            int val = arr[top1--];
            return val;
        }
        return -1;
    }
    // Return and remove top Value from Second Stack
    int pop2() {
        if(top2 < size){
            int val = arr[top2++];
            return val;
        }
        return -1;

    }
};


#endif //STACK_TWOSTACK_H
