#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n/2+1; i++)
    {
        for(j=n/2-i; j>0; j--)
            printf(" ");
        for(j=i*2+1; j>0; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}