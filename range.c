
#include <stdio.h>

int main() {
    int num;
    int lower = 10, upper = 20;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= lower && num <= upper) {
        printf("Number is within range\n");
    } else {
        printf("Number is out of range\n");
    }

    return 0;
}
