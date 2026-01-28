#include <stdio.h>

int main() {
    int a, b;

    a = 9; b = 2;
    int q1 = a; q1 /= b;  
    int r1 = a; r1 %= b;  
    printf("%d %d\n", q1, r1); 

    a = 10; b = 5;
    int q2 = a; q2 /= b;
    int r2 = a; r2 %= b;
    printf("%d %d\n", q2, r2);  

    a = 7; b = 3;
    int q3 = a; q3 /= b;
    int r3 = a; r3 %= b;
    printf("%d %d", q3, r3);    

    return 0;
}
