#include <stdio.h>

int main() {
    int R, C;
    int arr[10][10];
    scanf("%d %d", &R, &C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            for (int x = i; x < R; x++) {
                for (int y = (x == i ? j + 1 : 0); y < C; y++) {
                    if (arr[i][j] == arr[x][y]) {
                        printf("%d", arr[i][j]);
                        return 0;
                    }
                }
            }
        }
    }
    printf("No repeating element");
    return 0;
}
