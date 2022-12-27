#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, *ptr;

    printf("Enter total number of values:\n ");
    scanf("%d", &n);

    ptr=(int*)calloc(n,sizeof(int));

    printf("Enter the values:\n");
    for(i = 0; i < n; i++){
        scanf("%d", (ptr+ i));
    }
    printf("Enter updated size of n:\n");
    scanf("%d", &n);

   
     int *ptr1=(int*)realloc(ptr,n*sizeof(int));

    printf("pervious address:%d\n",ptr);
    printf("new address:%d\n",ptr1);

    printf("The entered values are:\n");
    for(i =0; i < n; i++){
        printf("%d\n", *(ptr + i));
    }
    free(ptr1);
    return 0; 
}