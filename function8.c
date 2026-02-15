#include <stdio.h>
int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    return rev;
}

int main()
{
    int N, result;
    scanf("%d", &N);
    result = reverseNumber(N);

    printf("%d", result);

    return 0;
}
