#include <stdio.h>

int main() {
    int N, i, expense;
    int total = 0, overspend = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d", &expense);
        total += expense;
        if (expense > 1000)
            overspend++;
    }

    printf("Total Expense: %d\n", total);
    printf("Overspend Days: %d", overspend);

    return 0;
}
