#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter person's name: ");
    scanf("%s", p.name);

    int choice;

    printf("Select Gender:\n");
    printf("0. Male\n");
    printf("1. Female\n");
    printf("2. Other\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    p.gender = choice;

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    printf("Gender: ");

    switch(p.gender)
    {
        case MALE:
            printf("Male\n");
            break;

        case FEMALE:
            printf("Female\n");
            break;

        case OTHER:
            printf("Other\n");
            break;

        default:
            printf("Invalid Gender\n");
    }

    return 0;
}
