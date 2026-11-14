#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, highest = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    // Display result
    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll Number: %d\n", s[highest].roll_no);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}
