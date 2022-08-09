#include <stdio.h>
int main(void)
{
    int i, j, k, h, r;
    scanf("%d %d", &h, &r);
    for(i=0; i<r; i++)
    {
        for(j=0; j<h; j++)
        {
            for(k=0; k<j; k++)
                printf(" ");
            printf("*\n");
        }
        for(j=0; j<h-1; j++)
        {
            for(k=h-2; k>j; k--)
                printf(" ");
            printf("*\n");
        }
    }
    return 0;
}