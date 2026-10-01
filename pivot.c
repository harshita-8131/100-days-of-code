#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int total = 0;
    int leftSum = 0;
    int pivot = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for (i = 0; i < n; i++)
    {
        total = total - arr[i];

        if (leftSum == total)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}
