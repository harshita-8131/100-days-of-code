#include <stdio.h>

int main()
{
    int n, i;
    int positive = 0, negative = 0, zero = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            positive++;
        }
        else if(arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Number of positive elements = %d\n", positive);
    printf("Number of negative elements = %d\n", negative);
    printf("Number of zero elements = %d\n", zero);

    return 0;
}
