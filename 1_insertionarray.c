#include <stdio.h>

int main()
{
    int a[50], size, i, number, position;

    printf("Enter size of array:\n");
    scanf("%d", &size);

    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter data u want to insert:\n");
    scanf("%d", &number);

    printf("Enter the position:\n");
    scanf("%d", &position);

    if (position <= 0 || position > size + 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        for (i = size - 1; i >= position - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[position - 1] = number;
        size++;
    }
    printf("Entered elements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
