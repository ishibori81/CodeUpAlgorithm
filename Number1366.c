#include <stdio.h>
int main(void)
{
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0 || i==n-1 || i==(n-1)/2 || j==0 || j==n-1 || j==(n-1)/2 || i==j || i+j==n-1)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}