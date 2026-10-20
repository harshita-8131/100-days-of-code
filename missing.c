#include <stdio.h>

int main() {
    int n, i, sum = 0, missing;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    missing = (n * (n + 1)) / 2 - sum;

    printf("%d\n", missing);

    return 0;
}
