#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '@' && str[i] != '\0' && str[i] != '\n')
    {
        printf("%c", str[i]);
        
        i++;
    }
    return 0;
}
