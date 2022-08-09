#include <stdio.h>
int main(void)
{
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=n-i; j>1; j--)
            printf(" ");
        printf("*");
        for(j=0; j<i*2; j++)
            printf(" ");
        printf("*\n");
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
            printf(" ");
        printf("*");
        for(j=0; j<(n-i)*2; j++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}