/**************************
Name: Nicholas Menard
Assignment: 4
Purpose: This file serves as the driver for the IntStack application. Its main purpose is to demonstrate
the functionality of the IntStack class, including the ability to push integers onto the stack, pop
integers off the stack, peek at the top integer on the stack, and check if the stack is empty. It
rigorously tests the IntStack class for correct behavior under various conditions, including stack
overflow and underflow, ensuring that the class behaves as expected. This file showcases how to
interact with the IntStack class and verifies its robustness through a series of automated tests without
requiring user input. The main function encompasses the execution of all tests, displaying the results
to the console for verification.
****************************/

#include "main.h"


int main() {
 
 /*********************************************
    Main function for executing tests on the IntStack class.
    
    Executes a series of stack operations to validate the functionality of the IntStack class,
    including pushing elements to a full stack, popping elements from an empty stack, and
    peeking at the top element. Errors are handled using exception catching.
    
    @return Returns 0 on successful execution.
    *********************************************/


   IntStack stack;

    // Test isEmpty on an empty stack
    std::cout << "Testing isEmpty on an empty stack: " << stack.isEmpty() << std::endl;

    // Try to pop from an empty stack
    try {
        stack.pop();
    } catch (const std::exception& e) {
        std::cout << "Expected error on pop from empty stack: " << e.what() << std::endl;
    }

    // Fill the stack to capacity
    std::cout << "Pushing elements onto the stack:" << std::endl;
    int i = 1;
    while (i <= STACK_SIZE) {
        stack.push(i);
        std::cout << "Pushed " << i << std::endl;
        i++;
    }

    // Try to push onto a full stack
    try {
        stack.push(11);
    } catch (const std::exception& e) {
        std::cout << "Expected error on pushing to full stack: " << e.what() << std::endl;
    }

    // Peek at the top element
    std::cout << "Peeking top element: " << stack.peek() << std::endl;

    // Empty the stack
    std::cout << "Popping elements from the stack:" << std::endl;
    while (!stack.isEmpty()) {
        std::cout << "Popped " << stack.pop() << std::endl;
    }

    // Verify the stack is empty
    std::cout << "Stack should now be empty: " << stack.isEmpty() << std::endl;

    return 0;
}
