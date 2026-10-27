#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
