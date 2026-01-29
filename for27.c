#include <stdio.h>

int main() {
    int N, i, amount;
    int total = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d", &amount);
        total += amount;
    }

    if (total > 10000)
        printf("Limit Exceeded");
    else
        printf("Approved");

    return 0;
}
