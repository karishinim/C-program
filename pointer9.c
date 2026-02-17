#include <stdio.h>

int main() {
    int n, x, i;
    int arr[100];
    int *p;
    int found = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    p = arr;
    for (i = 0; i < n; i++) {
        if (*(p + i) == x) {
            found = i + 1; // 1-indexed
            break;
        }
    }
    printf("%d", found);

    return 0;
}
