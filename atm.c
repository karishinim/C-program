#include <stdio.h>

int main() {
    int accountType, balance, withdrawAmount;

    scanf("%d", &accountType);
    scanf("%d", &balance);
    scanf("%d", &withdrawAmount);

    switch (accountType) {
        case 1:
            if (withdrawAmount <= balance) {
                printf("Transaction Successfull\n");
            } else {
                printf("Insufficient Balance\n");
            }
            break;

        case 2:
            if (withdrawAmount > 5000) {
                printf("Limit Exceeded\n");
            } else if (withdrawAmount > balance) {
                printf("Insufficient Balance\n");
            } else {
                printf("Transaction Successfull\n");
            }
            break;

        default:
            printf("Invalid Account Type\n");
    }

    return 0;
}
