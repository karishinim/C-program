#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, count= 1;
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            count= 0;
            break;
        }
    }
    if (count== 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
