#include <stdio.h>

int main() {
    int N, temp, digit, sum = 0, i, fact;

    scanf("%d", &N);
    temp = N;

    for (; temp != 0; temp /= 10) {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
    }

    if (sum == N)
        printf("Yes");
    else
        printf("No");

    return 0;
}
