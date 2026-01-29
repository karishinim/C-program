#include <stdio.h>

int main() {
    int M, N, i, sum = 0;

    scanf("%d %d", &M, &N);

    for (i = M; i <= N; i += M) {
        sum += i;
    }

    printf("%d", sum);
    return 0;
}
