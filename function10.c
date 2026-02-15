#include <stdio.h>
int sumNatural(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int N, result;
    scanf("%d", &N);
    result = sumNatural(N);
    printf("%d", result);

    return 0;
}
