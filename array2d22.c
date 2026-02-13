#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C], count = 0;
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);
    for(int i = 0; i < R; i++) {
        int inc = 1;
        for(int j = 1; j < C; j++) {
            if(a[i][j] <= a[i][j-1]) {
                inc = 0;
                break;
            }
        }
        if(inc)
            count++;
    }
    printf("%d", count);
    return 0;
}
