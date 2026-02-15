#include <stdio.h>
int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}
int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int isArmstrong(int n)
{
    int original = n, sum = 0, digit;
    int digits = countDigits(n);

    while (n > 0)
    {
        digit = n % 10;
        sum += power(digit, digits);
        n /= 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int N;
    scanf("%d", &N);

    if (isArmstrong(N))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
