#include <stdio.h>
float simpleInterest(int a, int b, int c) {
    return (a * b * c) / 100.0;
}

int main()
{
    int a, b, c;
    float interest;
    scanf("%d %d %d", &a, &b, &c);
    interest = simpleInterest(a, b, c);
    printf("%.2f", interest);

    return 0;
}
