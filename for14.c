#include <stdio.h>

int main() {
    int N, count = 0, digit;

    scanf("%d", &N);

    for (; N != 0; N /= 10) {
        digit = N % 10;
        if (digit % 2 == 0)
            count++;
    }

    printf("%d", count);
    return 0;
}
