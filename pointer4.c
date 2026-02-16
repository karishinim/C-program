#include <stdio.h>

int main()
{
    char source[101], destination[101];
    char *src, *dest;

    fgets(source, sizeof(source), stdin);

    src = source;
    dest = destination;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    printf("%s", destination);

    return 0;
}
