#include <stdio.h>

int main() {
    int N, decimal = 0, base = 1, digit;

    scanf("%d", &N);

    for (; N > 0; N /= 10) {
        digit = N % 10;
        decimal += digit * base;
        base *= 2;
    }

    printf("%d", decimal);
    return 0;
}
