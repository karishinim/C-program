#include <stdio.h>
long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int N;
    long long result;
    scanf("%d", &N);
    result = factorial(N);
    printf("%lld", result);

    return 0;
}
