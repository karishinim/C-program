#include <stdio.h>

int main() {
    int N, P, i;
    int result = 1;

    scanf("%d %d", &N, &P);

    for (i = 1; i <= P; i++) {
        result *= N;
    }

    printf("%d", result);
    return 0;
}
