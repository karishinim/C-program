#include <stdio.h>

int main() {
    int N, i;
    int a = 0, b = 1, c;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d", a);
        } else if (i == 2) {
            printf(" %d", b);
        } else {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
