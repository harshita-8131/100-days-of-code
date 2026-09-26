#include <stdio.h>

int main()
{
char str[200];
int i, start, end;
char temp;


printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);

start = 0;

for (i = 0; str[i] != '\0'; i++)
{
    if (str[i] == ' ' || str[i] == '\n')
    {
        end = i - 1;

        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        start = i + 1;
    }
}

printf("Sentence after reversing each word: %s", str);

return 0;


}
