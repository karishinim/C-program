#include <stdio.h>
int main() {
    for (int i=3;i>=0;i--) {
        for (int j=i;j>=0;j--) {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}