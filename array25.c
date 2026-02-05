#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = -1000000, max2 = -1000000;
    int min1 = 1000000, min2 = 1000000;

    for(int i = 0; i < n; i++) {
        // Find two largest values
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2) {
            max2 = arr[i];
        }

        // Find two smallest values
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    if(product1 > product2)
        printf("%d", product1);
    else
        printf("%d", product2);

    return 0;
}
