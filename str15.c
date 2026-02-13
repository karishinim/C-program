#include <stdio.h>

int main()
{
    char str[200];
    int i, count = 1;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
