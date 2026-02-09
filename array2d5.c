#include <stdio.h>

int main() {
    int R, C;
    int salary[10][10];
    int minDept = 0;
    int minSum;
    scanf("%d %d", &R, &C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }
    minSum = 0;
    for (int j = 0; j < C; j++) {
        minSum += salary[0][j];
    }
    for (int i = 1; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            sum += salary[i][j];
        }
        if (sum < minSum) {
            minSum = sum;
            minDept = i;
        }
    }
    printf("%d", minDept);

    return 0;
}
