#include <stdio.h>
int main() {
    int maxWeight, N;
    int weight, currentWeight = 0;
    int peopleEntered = 0;
    int i = 0;
    int overload = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &weight);
        if (currentWeight + weight > maxWeight) {
            overload = 1;
            break;
        }
        currentWeight += weight;
        peopleEntered++;
        i++;
    }
    printf("People Entered: %d\n", peopleEntered);

    if (overload)
        printf("Overload Status: Yes\n");
    else
        printf("Overload Status: No\n");
    return 0;
}
