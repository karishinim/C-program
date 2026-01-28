#include <stdio.h>

int main() {
    int a, b;

    a = 9; b = 2;
    printf("Quotient=%d Remainder=%d\n", a / b, a % b);

    a = 10; b = 3;
    printf("Quotient=%d Remainder=%d\n", a / b, a % b);

    a = 20; b = 4;
    printf("Quotient=%d Remainder=%d", a / b, a % b);

    return 0;
}
