#include <stdio.h>

int main()
{
    int i, n, x, sum=0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x%5 == 0)
            sum += x;
    }
    printf("%d", sum);
    return 0;
}