#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int codes[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &codes[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(codes[i] == codes[j]) {
                printf("No");
                return 0;
            }
        }
    }

    printf("Yes");
    return 0;
}
