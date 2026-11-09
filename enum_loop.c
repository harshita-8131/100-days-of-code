#include <stdio.h>

int main()
{
    enum Days
    {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    int i;

    printf("Enum Names and Their Integer Values:\n");

    for (i = SUNDAY; i <= SATURDAY; i++)
    {
        printf("%s = %d\n", dayNames[i], i);
    }

    return 0;
}
