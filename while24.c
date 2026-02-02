#include <stdio.h>

int main() {
    int maxCapacity, N;
    int arrivingPatients;
    int treatedPatients = 0;
    int rejectedPatients = 0;
    int i = 0;

    scanf("%d", &maxCapacity);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &arrivingPatients);

        if (treatedPatients + arrivingPatients <= maxCapacity) {
            treatedPatients += arrivingPatients;
        } else {
            rejectedPatients += (treatedPatients + arrivingPatients - maxCapacity);
            treatedPatients = maxCapacity;
        }

        i++;
    }
    printf("Treated Patients: %d\n", treatedPatients);
    printf("Rejected Patients: %d\n", rejectedPatients);

    return 0;
}
