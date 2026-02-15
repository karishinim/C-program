#include <stdio.h>
float areaOfCircle(int a) {
    return 3.14 * a * a;
}
int main()
{
    int R;
    float area;
    scanf("%d", &R);
    area = areaOfCircle(R);
    printf("%.2f", area);
    return 0;
}
