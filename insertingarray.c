#include <stdio.h>

int main()
{
    int a[100];
    int n, i, position, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position: ");
    scanf("%d", &position);

    printf("Enter the element: ");
    scanf("%d", &element);

    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;

    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
