#include <stdio.h>

int main()
{
    int i, n, max, min;
    for (i = 0; i < 5; i++ )
    {
        scanf("%d,", &n);
        if (i == 0)
        {
            max = n;
            min = n;
        }
        else
        { 
            if (n >= max) max = n;
            if (n < min) min = n;
        }
    }
    printf("%d\n%d", max, min);
    return 0;
}