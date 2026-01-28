#include <stdio.h>

int main() {
    int choice, a, b;

    printf("1. Addition\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            scanf("%d %d", &a, &b);
            printf("Sum = %d", a + b);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
