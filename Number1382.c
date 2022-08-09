#include <stdio.h>
int main(void)
{
    int i, j;
    for(i=1; i<=9; i++)
    {
        for(j=2; j<=5; j++)
            printf("%d x %d = %2d\t", j, i, j*i);
        printf("\n");
    }
    return 0;
}