#include <stdio.h>

int main()
{
char name[] = "Victoria Swan Salvatore";
int i;


printf("Name: %s\n", name);
printf("Output: ");

printf("%c. ", name[0]);

for (i = 1; name[i] != '\0'; i++)
{
    if (name[i] == ' ')
    {
        if (name[i + 1] != '\0')
        {
            int j = i + 1;

            while (name[j] != '\0' && name[j] != ' ')
            {
                j++;
            }

            if (name[j] == '\0')
            {
                printf("%s", &name[i + 1]);
                break;
            }
            else
            {
                printf("%c. ", name[i + 1]);
            }
        }
    }
}

return 0;


}
