#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* create_node(int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to insert a new node at the end of a linked list
struct Node* insert_end(struct Node* head, int data)
{
    // Create a new node
    struct Node* new_node = create_node(data);

    // Special case for the head end
    if (head == NULL)
    {
        head = new_node;
        return head;
    }

    // Locate the last node
    struct Node* current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Insert the new node at the end
    current->next = new_node;

    return head;
}

// Function to search for an element in an unsorted linked list
int search_unsorted(struct Node* head, int data)
{
    // Iterate through the list
    struct Node* current = head;
    while (current != NULL)
    {
        // If the current node contains the data, return 1
        if (current->data == data)
        {
            return 1;
        }

        current = current->next;
    }

    // If the element was not found, return 0
    return 0;
}

int main()
{
    // Create an empty linked list
    struct Node* head = NULL;

    // Insert some elements into the list
    head = insert_end(head, 5);
    head = insert_end(head, 2);
    head = insert_end(head, 7);
    head = insert_end(head, 3);
    head = insert_end(head, 1);

    // Search for an element in the list
    int search_element = 3;
    int result = search_unsorted(head, search_element);
    if (result)
    {
        printf("Element %d found in the linked list.\n", search_element);
    }
    else
    {
        printf("Element %d not found in the linked list.\n", search_element);
    }

    return 0;
}
