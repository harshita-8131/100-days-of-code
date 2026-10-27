#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        if (fputc(ch, destination) == EOF)
        {
            printf("Error writing to destination file.\n");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
