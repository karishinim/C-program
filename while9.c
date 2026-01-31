#include <stdio.h>
int main() {
    int maxWeight, N;
    int totalWeight = 0;
    int count = 0;
    int i = 0;
    int passengerWeight;
    int overload = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &passengerWeight);
        if (totalWeight + passengerWeight > maxWeight) {
            overload = 1;
            break;
        }
        totalWeight += passengerWeight;
        count++;
        i++;
    }
    printf("Passengers Allowed: %d\n", count);
    if (overload)
        printf("Overload: Yes\n");
    else
        printf("Overload: No\n");
    return 0;
}
