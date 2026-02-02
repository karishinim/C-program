#include <stdio.h>

int main() {
    int maxWeight, N, weight;
    int currentWeight = 0, peopleEntered = 0;
    int i = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &weight);
        if (currentWeight + weight > maxWeight) {
            break;
        }
        currentWeight += weight;
        peopleEntered++;
        i++;
    }
    printf("People Entered: %d\n", peopleEntered);
    if (peopleEntered < N)
        printf("Overload Status: Yes\n");
    else
        printf("Overload Status: No\n");
    return 0;
}
