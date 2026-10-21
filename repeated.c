#include <stdio.h>

int main() {
    int n, i, repeated = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        repeated = repeated ^ arr[i] ^ i;
    }

    repeated = repeated ^ n;

    printf("Repeated element = %d\n", repeated);

    return 0;
}
