#include <stdio.h>

int main() {
    int a, b;

    a = 5; b = 10;
    printf("%d\n", (a && b) || (a || b)); 
    
    a = 0; b = 5;
    printf("%d\n", (a && b) || (a || b)); 
   
    a = 0; b = 0;
    printf("%d", (a && b) || (a || b));  

    return 0;
}
