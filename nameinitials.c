#include <stdio.h>

int main()
{
char name[] = "Victoria Swan Salvatore";
int i;


printf("Name: %s\n", name);

printf("Initials: ");

printf("%c", name[0]);

for (i = 1; name[i] != '\0'; i++)
{
    if (name[i] == ' ')
    {
        printf("%c", name[i + 1]);
    }
}

return 0;


}
