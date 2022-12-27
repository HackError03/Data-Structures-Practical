#include <stdio.h>
#define MAX_SIZE 100  // Maximum size of the queue

int queue[MAX_SIZE];  // Declare queue as an array
int front = 0;  // Initialize front of queue
int rear = -1;  // Initialize rear of queue

// Function to insert an element into the queue
void enqueue(int element)
{
    // Check if queue is full
    if (rear == MAX_SIZE - 1)
    {
        printf("Error: Queue is full\n");
        return;
    }
    queue[++rear] = element;  // Insert element into queue and update rear
}

int main()
{
    enqueue(5);  // Insert element 5 into the queue
    printf("Enqueued element: %d\n", 5);  // Print enqueued element
    enqueue(10);  // Insert element 10 into the queue
    printf("Enqueued element: %d\n", 10);  // Print enqueued element
    return 0;
}