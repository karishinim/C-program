#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int prev, curr;
    int i = 1;
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;

    /* Read first day's index */
    scanf("%d", &prev);

    while (i < N) {
        scanf("%d", &curr);

        if (curr < prev) {
            totalDrops++;
            consecutiveDrops++;

            /* Detect crash on 3rd consecutive drop */
            if (consecutiveDrops == 3 && crashDay == -1) {
                crashDay = i + 1;   // day count starts from 1
            }
        } else {
            consecutiveDrops = 0;
        }

        prev = curr;
        i++;
    }
    if (crashDay == -1)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n", crashDay);

    printf("Total Drops: %d\n", totalDrops);

    return 0;
}
