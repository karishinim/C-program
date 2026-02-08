#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int salary[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }
    int max = INT_MIN, secondMax = INT_MIN;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int val = salary[i][j];
            if(val > max) {
                secondMax = max;
                max = val;
            }
            else if(val > secondMax && val != max) {
                secondMax = val;
            }
        }
    }
    printf("%d", secondMax);
    return 0;
}
