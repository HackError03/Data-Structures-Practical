#include <stdio.h>

int main()
{
    int a[50], size, i, position;
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    if (size <= 0 || size >= 50)
    {
        printf("out of bound\n");
    }
    else
    {
        printf("Enter elements of array:\n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("from which postion you want to delete:\n");
        scanf("%d", &position);

        if (position <= 0 || position > size)
        {
            printf("Invalid position\n");
        }
        else
        {
            for (i = position - 1; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;
        }

        printf("Enterd elements are or update array:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}