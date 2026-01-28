#include <stdio.h>

int main() {
    int a, b;

    a = 0; b = 5;
    printf("%d\n", a || b);

    a = 0; b = 0;
    printf("%d\n", a || b);  

    a = 3; b = 7;
    printf("%d", a || b);   

    return 0;
}
