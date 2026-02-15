#include <stdio.h>
int isEven(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int N;
    scanf("%d", &N);
    if (isEven(N))
        printf("Even");
    else
        printf("Odd");
    return 0;
}
