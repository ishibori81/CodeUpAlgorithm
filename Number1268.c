#include <stdio.h>

int main()
{
    int i, n, x, count=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if (x%2 == 0)
            count++;
    }
    printf("%d", count);
    return 0;
}