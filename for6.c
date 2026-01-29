#include <stdio.h>

int main() {
    int N, i;
    int factorial = 1;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        factorial *= i;
    }

    printf("%d", factorial);

    return 0;
}