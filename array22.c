#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int traffic[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &traffic[i]);
    }

    int peakCount = 0;

    for(int i = 1; i < n - 1; i++) {
        if(traffic[i] > traffic[i - 1] && traffic[i] > traffic[i + 1]) {
            peakCount++;
        }
    }

    printf("%d", peakCount);
    return 0;
}
