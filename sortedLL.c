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

// Function to insert a new node into a sorted linked list
struct Node* insert_sorted(struct Node* head, int data)
{
    // Create a new node
    struct Node* new_node = create_node(data);

    // Special case for the head end
    if (head == NULL || head->data >= new_node->data)
    {
        new_node->next = head;
        head = new_node;
    }
    else
    {
        // Locate the node before the point of insertion
        struct Node* current = head;
        while (current->next != NULL && current->next->data < new_node->data)
        {
            current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;
    }

    return head;
}

// Function to search for an element in a sorted linked list
int search_sorted(struct Node* head, int data)
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

        // If the data is smaller than the current node's data, it cannot be in the rest of the list
        if (current->data > data)
        {
            return 0;
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
    head = insert_sorted(head, 5);
    head = insert_sorted(head, 2);
    head = insert_sorted(head, 7);
    head = insert_sorted(head, 3);
    head = insert_sorted(head, 1);

    // Search for an element in the list
    int search_element = 3;
    int result = search_sorted(head, search_element);
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
