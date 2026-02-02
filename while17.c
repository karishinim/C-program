#include <stdio.h>
int main() {
    int ATMcash, N, i = 0;
    int withdraw;
    int success = 0;
    scanf("%d", &ATMcash);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &withdraw);
        if (ATMcash >= withdraw) {
            ATMcash -= withdraw;
            success++;
        } else {
            break;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\n", success);
    printf("Remaining Cash: %d\n", ATMcash);
    return 0;
}
