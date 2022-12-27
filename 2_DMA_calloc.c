#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Declare a pointer to int
    int size, i, *ptr;

    printf("Enter total number of values:\n");
    scanf("%d", &size);

    ptr = (int *)calloc(size, sizeof(int));

    printf("Enter the values:\n");
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
    printf("your calloc program is free:\n");

    return 0;
}