#include <stdio.h>

int main() {
    int N, i;
    int sum = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}
