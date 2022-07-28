#include <stdio.h>
int main(void)
{
    int i, x, y, s=0;
    for(i=0; i < 3; i++)
    {
        scanf("%d %d", &x, &y);
        if(s < x * y)
            s = x * y;
    }
    printf("%d", s);
    return 0;
}