#include <stdio.h>

int main()
{
    int i, n, k, x = 1;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= k; i++) x *= n;
    printf("%d", x);
    return 0;
}