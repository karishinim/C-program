#include <stdio.h>

int main() {
    int N, i, units;
    int total = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d", &units);
        total += units;
    }

    printf("Total Units: %d", total);

    return 0;
}
