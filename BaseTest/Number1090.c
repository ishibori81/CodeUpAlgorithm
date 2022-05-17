#include <stdio.h>

int main()
{
    int j, a, r, n;
    long long i;
    scanf("%d %d %d", &a, &r, &n);
    for (i = a,j = 1; ; j++, i *= r)
        if (j == n) break;
    printf("%lld", i);
    return 0;
}