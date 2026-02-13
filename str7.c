#include <stdio.h>
#include <string.h>
int main() {
    char str1[20];
    char str2[ ]={"c programming"};
    strcpy(str1,str2);
    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}