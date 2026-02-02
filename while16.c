#include <stdio.h>
int main() {
    int dataPack, N, i = 0;
    int usage;
    int exhaustedDay = -1;
    scanf("%d", &dataPack);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &usage);
        dataPack -= usage;
        if (dataPack <= 0 && exhaustedDay == -1) {
            exhaustedDay = i + 1;
            break;
        }
        i++;
    }
    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        if (dataPack < 0) {
            printf("Overused Data: %d\n", -dataPack);
        } else {
            printf("Overused Data: 0\n");
        }
    }
    return 0;
}
