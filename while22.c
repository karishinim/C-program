#include <stdio.h>

int main() {
    int walletBalance, N, cost;
    int successfulPurchases = 0;
    int i = 0;
    scanf("%d", &walletBalance);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &cost);
        if (walletBalance < cost) {
            break;
        }
        walletBalance -= cost;
        successfulPurchases++;
        i++;
    }
    printf("Successful Purchases: %d\n", successfulPurchases);
    printf("Final Balance: %d\n", walletBalance);
    return 0;
}
