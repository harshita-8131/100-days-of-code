#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i;
    int first = -1, last = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    printf("First and last index: %d, %d\n", first, last);

    return 0;
}
