#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit, digits, power = 1;
    int temp, middlePart, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    /* Find the last digit */
    lastDigit = temp % 10;

    /* Find the number of digits */
    digits = 0;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    /* Find 10^(digits-1) */
    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    /* Find the first digit */
    firstDigit = num / power;

    /* Find the middle part */
    middlePart = (num % power) / 10;

    /* Create the number after swapping */
    result = lastDigit * power + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}
