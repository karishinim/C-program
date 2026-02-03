#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int days[n];
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &days[i]);

        if(days[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even:%d Odd:%d", even, odd);

    return 0;
}
