#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    int rowSum, maxSum, minSum;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    rowSum = 0;
    for (int j = 0; j < C; j++)
        rowSum += a[0][j];
    maxSum = minSum = rowSum;
    for (int i = 1; i < R; i++) {
        rowSum = 0;
        for (int j = 0; j < C; j++)
            rowSum += a[i][j];
        if (rowSum > maxSum)
            maxSum = rowSum;
        if (rowSum < minSum)
            minSum = rowSum;
    }
    printf("%d", abs(maxSum - minSum));
    return 0;
}
