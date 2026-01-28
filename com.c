#include <stdio.h>

int main() {
    int a, b;

    a = 5; b = 5;
    printf("%d %d\n", a >= b, a <= b); 
    
    a = 10; b = 5;
    printf("%d %d\n", a >= b, a <= b);  
    
    a = 3; b = 7;
    printf("%d %d", a >= b, a <= b);   

    return 0;
}
