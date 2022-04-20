#include <stdio.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    printf("%.1lf MB", (double)(a * b * c* d / 8 )/ 1024 / 1024);
    return 0;
}