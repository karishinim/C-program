#include <stdio.h>
int main() {
    int capacity, N;
    int occupied = 0;
    int criticalCount = 0;
    int i = 0;
    int change;
    int criticalLimit;
    scanf("%d", &capacity);
    scanf("%d", &N);
    criticalLimit = (capacity * 90) / 100;
    while (i < N) {
        scanf("%d", &change);
        occupied = occupied + change;
        if (occupied > criticalLimit) {
            criticalCount++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);
    return 0;
}
