#include <stdio.h>

int main()
{
    int i, n, count=0;
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        if(i%10 == 1)
            count++;
    }
    printf("%d", count);
    return 0;
}