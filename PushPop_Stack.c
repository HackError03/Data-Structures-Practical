#include <stdio.h>
#define MAX_SIZE 100  // Maximum size of the stack

int stack[MAX_SIZE];  // Declare stack as an array
int top = -1;  // Initialize top of stack

// Function to push an element onto the stack
void push(int element)
{
    // Check if stack is full
    if (top == MAX_SIZE - 1)
    {
        printf("Error: Stack is full\n");
        return;
    }
    stack[++top] = element;  // Push element onto stack and update top
}

// Function to pop an element from the stack
int pop()
{
    // Check if stack is empty
    if (top == -1)
    {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return stack[top--];  // Pop element from stack and update top
}

int main()
{
    push(5);  // Push element 5 onto the stack
    push(10);  // Push element 10 onto the stack
    printf("Popped element: %d\n", pop());  // Pop and print top element
    printf("Popped element: %d\n", pop());  // Pop and print top element
    return 0;
}