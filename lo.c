#include <stdio.h>

int main() {
    int a, b;

    a = 5; b = 3;
    printf("%d\n", a && b);  

    a = 1; b = 1;
    printf("%d\n", a && b);  

    a = 0; b = 5;
    printf("%d", a && b);    

    return 0;
}
