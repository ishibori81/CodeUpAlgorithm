#include <stdio.h>

int main()
{
    int i, k, n;
    scanf("%d", &n);
    for (i = 1; i*i <= n; i++)
    {
        k = n - i * i;
    }
    printf("%d %d", k, i-1);
    return 0;
}