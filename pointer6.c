#include <stdio.h>

int main() {
    int n;
    int arr[100];
    scanf("%d", &n);
    int *p = arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", p);
        p++;
    }
    int *start = arr;
    int *end = arr + n - 1;
    int temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    p = arr;
    for (int i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
