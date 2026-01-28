#include <stdio.h>

int main() {
    int a, b;

    a = 5; b = 3;
    printf("%d\n", a != b); 

    a = 4; b = 4;
    printf("%d\n", a != b);  

    a = 9; b = 1;
    printf("%d", a != b);   

    return 0;
}
