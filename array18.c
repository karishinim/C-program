#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int curr = 1, maxLen = 1;

    for(int i = 1; i < n; i++) {
        if(a[i] > a[i - 1])
            curr++;
        else
            curr = 1;

        if(curr > maxLen)
            maxLen = curr;
    }

    printf("%d", maxLen);
    return 0;
}
