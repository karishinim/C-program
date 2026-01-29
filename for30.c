#include <stdio.h>

int main() {
    int batteryPercent, N, i, drain;

    scanf("%d", &batteryPercent);
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d", &drain);
        batteryPercent -= drain;
    }

    if (batteryPercent < 0)
        batteryPercent = 0;

    printf("Remaining Battery: %d%%", batteryPercent);

    return 0;
}
