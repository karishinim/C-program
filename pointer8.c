#include <stdio.h>

int main() {
    char str1[101], str2[51];
    char *p1, *p2;
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    p1 = str1;
    while (*p1 != '\0' && *p1 != '\n') {
        p1++;
    }
    p2 = str2;
    while (*p2 != '\0' && *p2 != '\n') {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';
    printf("%s", str1);

    return 0;
}
