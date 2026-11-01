#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i, roll;
    char name[50];
    float marks;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}
