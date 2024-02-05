/**************************
Name: Nicholas Menard
Assignment: 4
Purpose: This file implements the IntStack class methods defined in stack.h. It provides the 
functionality for basic stack operations within a fixed-size array structure.
***************************/

#include "stack.h"

IntStack::IntStack() : top(-1) {
/*********************************************
    Constructs the IntStack object and initializes the top index to -1 
    to represent an empty stack.
*********************************************/

} 

void IntStack::push(int value) {

    /*********************************************
    Adds an element to the top of the stack.

    @param value: The integer value to be added to the stack.
    @throws std::out_of_range if the stack is full.
    *********************************************/

    if (top >= STACK_SIZE - 1) { // Check for stack overflow
        throw std::out_of_range("Stack overflow. Cannot push more elements.");
    }
    stack[++top] = value;
}

int IntStack::pop() {

     /*********************************************
    Removes and returns the top element of the stack.

    @return The integer value removed from the top of the stack.
    @throws std::out_of_range if the stack is empty.
    *********************************************/

    if (isEmpty()) {
        throw std::out_of_range("Stack underflow. Cannot pop from an empty stack.");
    }
    return stack[top--];
}

int IntStack::peek() const {

    /*********************************************
    Returns the top element of the stack without removing it.

    @return The integer at the top of the stack.
    @throws std::out_of_range if the stack is empty.
    *********************************************/

    if (isEmpty()) {
        throw std::out_of_range("Stack is empty. Cannot peek.");
    }
    return stack[top];
}

bool IntStack::isEmpty() const {
    /*********************************************
    Checks if the stack is empty.

    @return True if the stack is empty, false otherwise.
    *********************************************/

    return top == -1;
}
