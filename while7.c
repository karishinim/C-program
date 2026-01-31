#include <stdio.h>
int main() {
    int totalData, N;
    int usedDays = 0, i = 0;
    int usage;
    scanf("%d", &totalData);
    scanf("%d", &N);
    while (i < N && totalData > 0) {
        scanf("%d", &usage);
        totalData -= usage;
        usedDays++;
        i++;
    }
    if (totalData < 0) {
        totalData = 0;
    }
    printf("Days Used: %d\n", usedDays);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}
