#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char str[100][100];
    int minLength;
    int same;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    minLength = strlen(str[0]);

    for (i = 1; i < n; i++)
    {
        if (strlen(str[i]) < minLength)
            minLength = strlen(str[i]);
    }

    printf("Longest Common Prefix: ");
    for (i = 0; i < minLength; i++)
    {
        same = 1;
        for (j = 1; j < n; j++)
        {
            if (str[j][i] != str[0][i])
            {
                same = 0;
                break;
            }
        }
        if (same)
            printf("%c", str[0][i]);
        else
            break;
    }
    printf("\n");

    return 0;
}