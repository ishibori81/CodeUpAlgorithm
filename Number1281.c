#include <stdio.h>

int main()
{
    int a, b, i, sum = 0;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        if (i%2 == 0)
        {
            sum -= i;
            printf ("-%d", i);
        }
        else
        {
            sum += i;
            if (a == i) printf ("%d", i);
            else printf ("+%d", i);
        } 
    }
    printf("=%d", sum);
    return 0;
    
}