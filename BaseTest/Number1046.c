#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a + b + c);
    printf("%.1f\n", (float)(a+b+c) / 3);
    return 0;
}