#include <stdio.h>
int main() {
    int n = 4;
    int i, j, space;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        for (space = 1; space <= 2 * (n - i) + 2; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (j = 1; j <= 2 * n + 2; j++)
        printf("*");
    printf("\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("*");
        for (space = 1; space <= 2 * (n - i) + 2; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
