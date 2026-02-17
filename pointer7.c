#include <stdio.h>

int main() {
    char str[101];
    char *start, *end;
    int length = 0, flag = 1;
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    start = str;
    end = str + length - 1;
    while (start < end) {
        if (*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }
    if (flag)
        printf("YES");
    else
        printf("NO");

    return 0;
}
