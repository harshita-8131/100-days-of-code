#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    int ch;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened.\n");
    }
    else
    {
        printf("File contents:\n");

        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}
