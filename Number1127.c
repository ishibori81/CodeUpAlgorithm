#include <stdio.h>

int main()
{
    int a1, b1, c1;
    float a2, b2, c2;
    scanf("%f %d\n", &a2, &a1);
    scanf("%f %d\n", &b2, &b1);
    scanf("%f %d", &c2, &c1);
    printf("%.1f", a2*a1+b2*b1+c2*c1);
    return 0;
}