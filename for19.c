#include <stdio.h>

int main() {
    int A, B, i, lcm;

    scanf("%d %d", &A, &B);

    for (i = 1; ; i++) {
        if (i % A == 0 && i % B == 0) {
            lcm = i;
            break;
        }
    }

    printf("%d", lcm);
    return 0;
}
