#include <stdio.h>
int main() {
    int N;
    int i = 0;
    int initialBalance;
    int transaction;
    int lowBalanceDays = 0;
    scanf("%d", &N);
    scanf("%d", &initialBalance);
    int balance = initialBalance;
    while (i < N) {
        scanf("%d", &transaction);
        balance = balance + transaction;
        if (balance < 2000) {
            lowBalanceDays++;
        }
        i++;
    }
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowBalanceDays);
    return 0;
}
