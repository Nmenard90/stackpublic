/**************************
Name: Nicholas Menard
Assignment: 4
Purpose: This file declares the IntStack class, which implements a stack data structure using a 
fixed-size integer array. The stack supports basic operations like push, pop, peek, and checking 
if the stack is empty.

***************************/

#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 10  // Define the size of the stack
#include <stdexcept> // For std::out_of_range


class IntStack {
    
    /*********************************************
This class defines a stack using a fixed-size array. It supports basic stack operations 
including push, pop, peek, and checking if the stack is empty.

@attrib stack : Fixed-size array for storing stack elements.
@attrib top : Integer index representing the top of the stack.
*********************************************/

public:
    IntStack(); // Constructor
    void push(int value); // Adds an element to the top of the stack
    int pop(); // Removes and returns the top element of the stack
    int peek() const; // Returns the top element without removing it
    bool isEmpty() const; // Checks if the stack is empty

private:
    int stack[STACK_SIZE]; // Fixed-size stack array
    int top; // Index of the top of the stack
};

#endif // STACK_H
