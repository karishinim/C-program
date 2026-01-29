#include <stdio.h>

int main() {
    int N, i, isPrime = 1;

    scanf("%d", &N);

    for (i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
