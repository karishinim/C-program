#include <stdio.h>

int main() {
    int digit;
    printf("Enter a single digit (0-9): ");
    scanf("%d", &digit);

    if(digit >= 0 && digit <= 9) {
        char asciiChar = digit + '0';
        printf("Digit in C (ASCII character) is: %c\n", asciiChar);
    } else {
        printf("Invalid input! Please enter a digit between 0 and 9.\n");
    }

    return 0;
}