#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char str[100];
    char stack[100];
    int top = -1;
    int valid = 1;
    int i;

    printf("Enter parentheses: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            stack[++top] = str[i];
        }
        else
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            if ((str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{'))
            {
                valid = 0;
                break;
            }

            top--;
        }
    }

    if (top != -1)
        valid = 0;

    if (valid)
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}