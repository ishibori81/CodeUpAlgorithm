#include <stdio.h>
int main(void)
{
    int i, j, n;
    scanf("%d", &n);
    for(i=n; i>0; i--)
    {
        for(j=i; j>0 ; j--)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}