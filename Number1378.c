#include <stdio.h>
int main(void)
{
    int i, j, n, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            sum += j;
    }
    printf("%d", sum);
    return 0;
}