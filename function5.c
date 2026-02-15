#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int N, result;
    scanf("%d", &N);
    result = sumOfDigits(N);
    printf("%d", result);

    return 0;
}
