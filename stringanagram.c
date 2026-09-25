#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int count[26] = {0};
    int i;
    int anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2))
    {
        anagram = 0;
    }
    else
    {
        for (i = 0; str1[i] != '\0'; i++)
        {
            count[str1[i] - 'a']++;
            count[str2[i] - 'a']--;
        }

        for (i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram == 1)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
