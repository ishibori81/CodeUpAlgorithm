#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    scanf("%d %d", &n, &k);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(k==1) printf("*");
            else if(i==1 || i==n || j==1 || j==n || (i+j)%k==1)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}