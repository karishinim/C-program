#include <stdio.h>

int main() {
    int n = 4;
    int i, j, space;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (space = 1; space <= 2 * (n - i); space++) {
            printf(" ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
