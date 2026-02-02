#include <stdio.h>
int main() {
    int fuel, N;
    int trips = 0, i = 0;
    int consumption[100];
    scanf("%d", &fuel);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &consumption[i]);
        i++;
    }
    i = 0;
    while (i < N && fuel >= consumption[i]) {
        fuel -= consumption[i];
        trips++;
        i++;
    }
    printf("Completed Trips: %d\n", trips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}
