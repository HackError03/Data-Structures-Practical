#include <stdio.h>
/*Header file include */
#include <stdlib.h>
int main()
{
    // Declare a pointer to int
    int size, i, *ptr;

    printf("Enter total values you want:\n");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));
    
     // Initialize the values in the dynamically allocated memory
    printf("Enter the elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    // Print the values in the dynamically allocated memory
    printf("Entered values are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", *(ptr + i));
    }
     // Deallocate the memory using free
    free(ptr);
    printf("Your malloc program is free");
    return 0;
}