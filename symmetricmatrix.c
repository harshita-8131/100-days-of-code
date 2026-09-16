#include <stdio.h>

int main()
{
    int A[10][10];
    int n;
    int i, j;
    int symmetric = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != A[j][i])
            {
                symmetric = 0;
            }
        }
    }

    if (symmetric == 1)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
