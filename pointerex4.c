#include <stdio.h>
int main() {
    int arr[5]={33,44,55,66,12};
    int *p=arr;
    int length=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<length;i++){
        printf("%d\n",*p++);
    }
    return 0;
}