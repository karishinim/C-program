#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int stops[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &stops[i]);
    }

    int start = 0, end = n - 1;
    while(start < end) {
        int temp = stops[start];
        stops[start] = stops[end];
        stops[end] = temp;

        start++;
        end--;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", stops[i]);
    }

    return 0;
}
