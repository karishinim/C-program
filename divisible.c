#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 11 == 0) {
        printf("Divisible by 11\n");
    } else {
        printf("Not divisible by 11\n");
    }

    return 0;
}
