#include <stdio.h>

int main()
{
    int a[50], i, n, data;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter not a same data of array:\n");
    for ( i = 0; i < n; i++)
    {
     scanf("%d", &a[i]);   
    }
    
    printf("which data you want to find.\nEnter that data:\n");
    scanf("%d", &data);
    for(i = 0; i < n; i++){
        if(a[i] == data){
            printf("Element found at position\n%d",i + 1);
            break;
        }
    }
    if(i == n){
        printf("element not found");
    }
    return 0;
}