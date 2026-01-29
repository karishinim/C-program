#include <stdio.h>

int main() {
    int N, temp, digit, sum = 0, count = 0, i, power;

    scanf("%d", &N);
    temp = N;

    for (; temp != 0; temp /= 10)
        count++;

    temp = N;

    for (; temp != 0; temp /= 10) {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= count; i++) {
            power *= digit;
        }
        sum += power;
    }

    if (sum == N)
        printf("Yes");
    else
        printf("No");

    return 0;
}
