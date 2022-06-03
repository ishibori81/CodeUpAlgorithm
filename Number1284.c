#include <stdio.h>

int main()
{
    int i, j, n, s;
    scanf("%d", &n);
    for (i=2; i < n; i++)
    {
        if(n%i == 0)
        {
            s = n/i;
            for (j=2; j < s; j++)
            {
                if (s%j == 0)
                {
                    printf("wrong number");
                    return 0;
                }
            }
            printf("%d %d", i, s);
            return 0;
        }
    }
    printf("wrong number");
    return 0;
}