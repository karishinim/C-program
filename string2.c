#include <stdio.h>

int main() {
    char password[100];
    int i, hasUpper = 0;
    fgets(password, sizeof(password), stdin);
    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
                break;
            }
        }
    if (hasUpper)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
    }
