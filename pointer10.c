#include <stdio.h>

int main() {
    char str[201];
    char *p;
    int count = 1;
    fgets(str, sizeof(str), stdin);
    p = str;
    while (*p != '\0' && *p != '\n') {
        if (*p == ' ') {
            count++;
        }
        p++;
    }
    printf("%d", count);

    return 0;
}
