#include <stdio.h>

int main() {
    int a, b;

    a = 10; b = 5;
    a -= b;  
    printf("%d\n", a); 

    a = 20; b = 10;
    a -= b;
    printf("%d\n", a);  

    a = 5; b = 5;
    a -= b;
    printf("%d", a);    

    return 0;
}
