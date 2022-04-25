#include <stdio.h>

int main()
{
    int a, d, n, i;
    int sum;
    scanf("%d %d %d", &a, &d, &n);
    sum = a + d;
    for (i = 3; i <= n; i++)
    {
        sum += d;
    }
    printf("%d", sum);
    return 0;
}