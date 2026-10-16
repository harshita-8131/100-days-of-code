#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, length, maxLength = 0;

    scanf("%999s", s);

    length = strlen(s);

    for (i = 0; i < length; i++)
    {
        int visited[256] = {0};
        int currentLength = 0;

        for (j = i; j < length; j++)
        {
            if (visited[(unsigned char)s[j]] == 1)
            {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            currentLength++;
        }

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
