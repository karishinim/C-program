#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int *p=&n;
    printf("%d\n",*p);
    return 0;
}