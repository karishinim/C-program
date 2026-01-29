#include <stdio.h>

int main() {
    int N, temp, rev = 0;

    scanf("%d", &N);
    temp = N;

    for (; temp != 0; temp /= 10) {
        rev = rev * 10 + (temp % 10);
    }

    if (rev == N)
        printf("Yes");
    else
        printf("No");

    return 0;
}
