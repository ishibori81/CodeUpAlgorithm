#include <stdio.h>

int main()
{
    int i, n, x;
    scanf("%d", &n);
    for(i=1; i <= n; i++)
    {
        scanf("%d", &x);
        if (n == 1) printf("%d %d %d", x, x, x);
        else
        {
            if (i == 1) printf("%d ", x);
            else if (i == n/2+1) printf("%d ", x);
            else if (i == n) printf("%d", x);
        }
    }
    return 0;
}