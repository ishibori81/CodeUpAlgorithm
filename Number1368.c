#include <stdio.h>
int main(void)
{
    char d;
    int i, j, h, k;
    scanf("%d %d %c", &h, &k, &d);
    for(i=0; i<h; i++)
    {
        if(d == 'L')
        {
            for(j=0; j<i; j++)
                printf(" ");
        }
        else
        {
            for(j=k-i; j>0; j--)
                printf(" ");
        }
        for(j=0; j<k; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}