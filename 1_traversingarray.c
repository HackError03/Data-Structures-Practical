#include <stdio.h>

int main()
{
    int a[50],size,i;
    
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    
    printf("Enter the elements of array:\n");
    //We initialize index from 1 and <= end of index using for loop...
    for(i = 1; i <= size; i++){
        scanf("%d", &a[i]);
    }
    
    printf("Entered elements are:\n");
    //We initialize index from 1 and <= end of index using for loop...
    for(i = 1; i <= size; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}