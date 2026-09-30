#include <stdio.h>

int main()
{
    int n, target, i;
    int arr[100];
    int left, right, mid;
    int found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (found != -1)
        printf("Target found at index: %d\n", found);
    else
        printf("Target not found\n");

    return 0;
}