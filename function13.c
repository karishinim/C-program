#include <stdio.h>
long long power(int a, int b)
{
    long long result = 1;

    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }

    return result;
}

int main()
{
    int A, B;
    long long result;
    scanf("%d %d", &A, &B);
    result = power(A, B);
    printf("%lld", result);

    return 0;
}
