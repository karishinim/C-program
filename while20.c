#include <stdio.h>

int main() {
    int N, overtime;
    int totalOvertime = 0, burnoutDays = 0;
    int i = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &overtime);
        totalOvertime += overtime;
        if (overtime > 4) {
            burnoutDays++;
        }
        i++;
    }
    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d\n", burnoutDays);
    return 0;
}
