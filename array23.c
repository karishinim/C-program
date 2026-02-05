#include <stdio.h>
#include <stdlib.h>   // for abs()

int main() {
    int n;
    scanf("%d", &n);

    int temp[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
    }

    int closest = temp[0];

    for(int i = 1; i < n; i++) {
        if (abs(temp[i]) < abs(closest)) {
            closest = temp[i];
        }
        else if (abs(temp[i]) == abs(closest) && temp[i] > closest) {
            closest = temp[i];
        }
    }

    printf("%d", closest);
    return 0;
}
