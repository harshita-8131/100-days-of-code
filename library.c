#include <stdio.h>

int main()
{
    int days;
    float fine;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Library Fine = Rs. %.2f", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (days - 5) * 6;
        printf("Library Fine = Rs. %.2f", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }

    return 0;
}
