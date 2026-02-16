#include <stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int *ptr;
    int max;
    scanf("%d", &n);
    ptr = arr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    max = *ptr;
    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    printf("%d", max);

    return 0;
}
