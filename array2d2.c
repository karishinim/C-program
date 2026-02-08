#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int x = a[i][j];
            if(x > max1) {
                max2 = max1;
                max1 = x;
            } else if(x > max2) {
                max2 = x;
            }
            if(x < min1) {
                min2 = min1;
                min1 = x;
            } else if(x < min2) {
                min2 = x;
            }
        }
    }
    int product1 = max1 * max2;
    int product2 = min1 * min2;
    printf("%d", product1 > product2 ? product1 : product2);
    return 0;
}
